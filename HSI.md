---
title: Home 
---
 
# Hardware Implementation

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/EGR%20314%20Team%20PCB%202.0%20UDV.png?raw=true)

Schematic View

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/BottomViewPCB.png?raw=true?raw=true)

PCB Bottom View

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/TopViewPCB.png?raw=true?raw=true)

PCB Top View

# Functionality

The whole design is based on the idea of having a sensor for two of the factors that determine how hot a room is, which is temperature, of course, as well as light. These sensors would be able to read the temperature and light in the room and would be able to control the blinds depending on how high or how low those values are. 

Our schematic consists of our Voltage Regulator that takes 12V and makes sure our whole circuit runs on 3.3V, Microcontroller that controls all of our other components, ESP32 that allows us to communicate with our microcontroller via internet, Temperature sensor, Light Sensor, and Motor Driver that controls the motor. This shchematic allows us to connect all of our components and have them communicate to make our Home automation device function as it should. All of the components such as the sensors and the motor driver are I2C, which means that they all get connected to the same pins on our microcontroller. This makes our PCB significantly more simple and minimalist. 

# Improvements for the Future

We came upon multiple challenges when it came to hardware. The main challenge being the header pads on our PCB. Header pads on default are very small and fragile, which we found out just how fragile while working on our project. Despite being soldered solidly, the pads for multiple of our headers got torn off by simply being touched. This caused a lot of difficulty and forced us to solder external wires through many parts on our board as well as a lot of hot glue to ensure more things wouldn't tear off. This could've easily been avoided by designing custom pads for the headers which would have more surface area to ensure they can't be torn as easily as they did.

Another change that we wished we would have made is adding more headers. We quickly realized that we were running out of connections for certain things as more things were getting damaged or torn off. Adding more headers would've helped a lot since it would give us a "Plan B" from when things got damaged. Having a backup plan is always a good idea when designing a PCB and we definitely will next project despite having gotten away with it this time. 

# Software Implementation

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/Software%20Proposal.png?raw=true)

# What we learned/ would change
Thoroughly reading the data sheet for each component is probably the best advice when it comes to this project. Some of the components had rather long data sheets with more information than we wish they did, so to get around this we took a shortcut and went straight to the coding section. That was the biggest mistake. Data sheets give all the information you need and we learned that importance the hard way. It took a very long time to figure out the coding and what certain things did. The amount of time we lost trying to figure out the coding registers and order of everything by only reading the coding section was a lot more than if we had just read the whole datasheet. 

When it came to actual coding and organization, we were able to do a decent job. Everything worked well in the software aspect first try, which was a very nice surprise. The way we were able to do that was by planning ahead. We began our code by declaring all the registers from our components, which would initialize and enable them to communicate with our microcontrollers. After that, we made functions for each of our commponents since each had its own set of equations or unique way of sending out data that required a specific conversion or order of operations which could be made through the use of functions. These first two steps required an in depth search and analyzation of the data sheet to complete succesfully. I attribute our success in making our code work first try from having not started the code until we understood all our individual components and the setup each would need. It truly helped us plan ahead and from the beginning start on the right track. We then made sure to initialize anything that needed initialization at the beginning of our main code. The main loop was very simple where it was mostly I2C reads and writes and calling our functions that we had made at the beginning. The rest was using Printf to be able to use our ESP32 to MQTT communiication print out the data from our sensors.

# 5 Biggest Changes
1. Organizing the registers for our components
   * This change helped us mostly in readabilty and ability to quickly differenciate the registers.
2. Commenting every function and variable
   * Since the coding was done over a long period of time we often forgot why we wrote things the way we did towards the beginning, so we started commenting thoroughly
3. Using delays generously
   * We found out very quickly once we started running the code that things took some time to read or write, which would make them work a bit inconsistently. We were able to imporve this and ensure every value got read correctly by adding multiple delays throughout all our code.
4. Minimizing Printf
   * After we had started testing, we realized that certain values were not being shown in our MQTT server. The reason for that is ESP32 communication doesn't like it when you send too many things to print. We then had to reduce all of our Printfs and only keep the important values that needed to be read.
5. Two different codes for different sensors
   * When it came to actual application of our project, we realized that it would be very unrealistic and would make testing much more difficult to have one code that would use specific conditions from both our sensors to get the motor to react. We decided to make two codes, one that would get the motor to close the blinds(spin the motor) with the temperature of the room and one that would do the same but based on the brightness. This made testing much easier and will work better in real life.

# MPLAB X IDE Setup  
     
![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-EUSART1.png?raw=true)

Eusart 1
* Enable Eusart
* Enable Transmit
* Enable Recieve
* Enable Eusart Interrupts
* redirect STDIO to USART
* Everything else Default
  

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-EUSART2.png?raw=true)

Eusart2
* Enable Eusart
* Enable Transmit
* Enable Recieve
* Enable Eusart Interrupts
* Everything else Default


![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-MSSP1.png?raw=true)

MSSP1
* Interrupt Driven
* Serial Protocol: I2C
* Mode: Master
* Everything else Default
  

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-TMR1.png?raw=true)

Timer 1
* Enable Timer
* Enable Timer Interrupt
* Everything else Default


![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-TMR2.png?raw=true)

Timer 2
* Enable Timer
* Source: FOSC/4
* Enable Timer Interrupt
* Everything else Default


![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-Interrupt%20Module.png?raw=true)

Interrupt Module
* Make sure the Timers are on the top of Interrupt Module


![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-Pin%20Module.png?raw=true)

Pin Module
* Only Eusart 1 and 2 are Outputs


![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-System%20Module.png?raw=true)

System Module
* Oscillator Select: Make sure it is using the internal oscillator
* 64 MHz
* Watchdog Timer Disabled
* Everything else Default

```C
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
```

[Main code](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/Code/mainc.md)


