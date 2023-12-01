---
title: Home 
---
 
# Hardware and Software Implementation.

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-EUSART1.png?raw=true)
* Enable Eusart
* Enable Transmit
* Enable Recieve
* Enable Eusart Interrupts
* redirect STDIO to USART
* Everything else Default

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-EUSART2.png?raw=true)
* Enable Eusart
* Enable Transmit
* Enable Recieve
* Enable Eusart Interrupts
* Everything else Default

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-MSSP1.png?raw=true)
* Interrupt Driven
* Serial Protocol: I2C
* Mode: Master
* Everything else Default

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-TMR1.png?raw=true)
* Enable Timer
* Enable Timer Interrupt
* Everything else Default

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-TMR2.png?raw=true)
* Enable Timer
* Source: FOSC/4
* Enable Timer Interrupt
* Everything else Default

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-Interrupt%20Module.png?raw=true)
* Make sure the Timers are on the top of Interrupt Module

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-Pin%20Module.png?raw=true)
* Only Eusart 1 and 2 are Outputs

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-System%20Module.png?raw=true)
* Oscillator Select: Make sure it is using the internal oscillator
* 64 MHz
* Watchdog Timer Disabled
* Everything else Default

