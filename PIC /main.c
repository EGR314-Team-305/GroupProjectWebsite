/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F27J53
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "mcc_generated_files/i2c1_master.h"

#define TEMP_SENSOR_ADDRESS 0x4C
#define TEMP_SENSOR_REG 0x00

#define LIGHT_SENSOR_ADDRESS 0x10
#define LIGHT_SENSOR_REG 0x00

#define MOTOR_DRIVER_ADDRESS 0x60
#define MOTOR_DRIVER_REG 0x21


uint8_t rx2Data;
uint8_t rx1Data;

uint8_t tempValue = 0;
uint8_t tempC = 0;
uint8_t tempSign = 0; // 0 = Positive ; 1 = Negative
    
int counter = 0;
    
uint16_t lightValueRAWLux = 1;
float lightValueLux = 1;
uint16_t lightValueWhiteRAWLux = 2;
float lightValueWhiteLux = 2;
    
int MotorDir = 0;
int MotorOn = 0; // 0 = Off ; 1 = On                                              

void getTempC (uint8_t tValue, uint8_t *tC, uint8_t *tSign)
{
    //tValue = 35; // Temporal Forced value for testing
    
    if (tValue >= 128) // Negative temperature
    {
        *tSign = 1; // Negative
        *tC = 256 - tValue;
    }
    else // Positive Temperature
    {
        *tSign = 0;
        *tC = tValue;
    }
}

void TurnMotorLeft ()
{
  I2C1_Write1ByteRegister(MOTOR_DRIVER_ADDRESS, 0x01, 0x01);RA1=1; 
  
}

void TurnMotorRight()
{
  I2C1_Write1ByteRegister(MOTOR_DRIVER_ADDRESS, 0x01, 0x09);RA3=1;
  //I2C1_Write1ByteRegister(MOTOR_DRIVER_ADDRESS, 0x02, 0x00);  
  
}

float ConvertLux (uint16_t val)
{
    float gain_factor =  0.4608; //gain=1/8 and int time=100ms, max lux =  30 199 lux
    float valf = roundf(val * gain_factor);
    //lux = (((6.0135e-13 * lux - 9.3924e-9) * lux + 8.1488e-5) * lux + 1.0023) * lux;
    float valcorr = (((6.0135E-13 * valf -9.392E-9) * (valf + 8.1488E-5) * valf + 1.0023E0) * valf);
    return valcorr;
}

void EUSART1_ISR_callback(void)
{  
    // i. Call the default EUSART2 RX ISR
    EUSART1_Receive_ISR();
    
    // ii. If EUSART2 receiver has received data and is ready to be read
    if (EUSART1_is_rx_ready())
    {
        // ii.i. Read a byte from the EUSART2 buffer
        rx1Data = EUSART1_Read();
        // ii.ii. Loop until the EUSART2 transmitter is ready to accept/transmit
        while (!(EUSART2_is_tx_ready()))
            {}
        // ii.iii. Write the byte you just read to EUSART2
        EUSART2_Write(rx1Data);
        // ii.iv. Loop until EUSART2 data has been transmitted
        while (!(EUSART2_is_tx_done()))
            {}
    }
    
}

void EUSART2_ISR_callback(void){  
    // i. Call the default EUSART2 RX ISR
    EUSART2_Receive_ISR();
    
    // ii. If EUSART2 receiver has received data and is ready to be read
    if (EUSART2_is_rx_ready()) {
        // ii.i. Read a byte from the EUSART2 buffer
        rx2Data = EUSART2_Read();
        // ii.ii. Loop until the EUSART2 transmitter is ready to accept/transmit
        while (!(EUSART1_is_tx_ready()))
            {}
        // ii.iii. Write the byte you just read to EUSART2
        EUSART1_Write(rx2Data);
        // ii.iv. Loop until EUSART2 data has been transmitted
        while (!(EUSART1_is_tx_done()))
            {}
    }
}

void Motor_Controller_Toggle(void)
{
    printf("Mode: Togg Slct Ctrl\r\n");
    // Change direction if temp greater than +27 C
    if((tempSign == 0) && (tempC > 27)  &&  (MotorOn == 0))
    {

        if (MotorDir == 0) 
        {
            TurnMotorLeft();
        }
        else //motorDir == 1
        {
            TurnMotorRight();
        }

        MotorDir = !MotorDir;

        MotorOn = 1;
    }
    else
    {
        //dont spin
        if(tempC <= 27)
        {
            MotorOn = 0;
        }
    }
}

void Motor_Controller_AutoTemp(void)
{
    printf("Mode: Auto Temp Ctrl\r\n");
    // Rotate Clockwise Once if temp greater than +28 C
    if((tempSign == 0) && (tempC > 28)  &&  (MotorOn == 0))
    {

        TurnMotorLeft();
        MotorOn = 1;
        
    }
    if((tempSign == 0)  &&  (tempC <= 28)  &&  (MotorOn == 1))
    {
    // Rotate Counter Clockwise Once if temp is less than or equal to +28 C
        
        TurnMotorRight();
        MotorOn = 0;
    }
}

void Motor_Controller_AutoLight(void)
{
    printf("Mode: Auto Light Ctrl\r\n");
    //close blinds
    // Rotate Clockwise Once if light is brighter than 50000 lux 
    if((lightValueRAWLux > 50000)  &&  (MotorOn == 0))
    {

        TurnMotorLeft();
        MotorOn = 1;
        
    }
    if((lightValueRAWLux <= 50000)  &&  (MotorOn == 1))
    {
    //Open blinds
    // Rotate Counter Clockwise Once if light is less than or equal to 50000 lux 
        
        TurnMotorRight();
        MotorOn = 0;
    }
}


int main(void)
{
    SYSTEM_Initialize();
    TMR1_Initialize();
    TMR2_Initialize();
    EUSART1_Initialize();
    EUSART2_Initialize();
    TMR1_StartTimer();
    TMR2_StartTimer();
    Power_SetHigh();
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable(); // <--
    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable(); // <--
    
    
    EUSART2_SetRxInterruptHandler(EUSART2_ISR_callback);

    // Wait time to allow initialization
    __delay_ms(5000); 
    

    I2C1_Write2ByteRegister(LIGHT_SENSOR_ADDRESS, 0x00, 0x10);
    __delay_ms(100);
    I2C1_Write2ByteRegister(LIGHT_SENSOR_ADDRESS, 0x03, 0x00);
    __delay_ms(100);
    
    while (1)
    {
        
        //Light Sensor
        
        //I2C1_Read2ByteRegister(i2c1_address_t address, uint8_t reg)
        lightValueRAWLux = I2C1_Read2ByteRegister(LIGHT_SENSOR_ADDRESS, 0x04);
        
        lightValueWhiteRAWLux = I2C1_Read2ByteRegister(LIGHT_SENSOR_ADDRESS, 0x05);
        
        lightValueLux = ConvertLux(lightValueRAWLux);RA1=0;
        lightValueWhiteLux = ConvertLux(lightValueWhiteRAWLux);RA3=0;
        
        printf(">> Light Value #%d = %f Lux\r\n", ++counter, lightValueLux);
        printf(">> White Light Value #%d = %f Lux\r\n", counter, lightValueWhiteLux);
        
       
        //temp sensor
        tempValue = I2C1_Read1ByteRegister(TEMP_SENSOR_ADDRESS, TEMP_SENSOR_REG);
        //printf(">> Temperature Value #%d = %d \r\n", ++counter, tempValue);
        
        getTempC (tempValue, &tempC, &tempSign);
        if (tempSign == 1) // negative
        {
            printf(">> Temperature #%d = -%d C.\r\n", counter, tempC);
        }
        else // positive
        {
            printf(">> Temperature #%d = %d C.\r\n", counter, tempC);
        }
        
        
        
        //motor controller
        Motor_Controller_AutoTemp();
        //Motor_Controller_Toggle();
        //Motor_Controller_AutoLight();
        
        
//        if (tempC > 30)
//        {
//            Power_SetHigh();
//            __delay_ms(1000); 
//            Power_SetLow();
//        }
        
        //printf(">> MotorOn #%d = %d\r\n", counter, MotorOn);
        
            
        __delay_ms(400); // .8 second delay
    }
}
