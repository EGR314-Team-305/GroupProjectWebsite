---
title: Home 
---
 
# Hardware and Software Implementation

# Hardware Implementation

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/EGR%20314%20Team%20PCB%202.0%20UDV.png?raw=true)

# Funcionality

The whole design is based on the idea of having a sensor for two of the factors that determine how hot a room is, which is temperature, of course, as well as light. These sensors would be able to read the temperature and light in the room and would be able to control the blinds depending on how high or how low those values are. 

Our schematic consists of our Voltage Regulator that takes 12V and makes sure our whole circuit runs on 3.3V, Microcontroller that controls all of our other components, ESP32 that allows us to communicate with our microcontroller via internet, Temperature sensor, Light Sensor, and Motor Driver that controls the motor. This shchematic allows us to connect all of our components and have them communicate to make our Home automation device function as it should. All of the components such as the sensors and the motor driver are I2C, which means that they all get connected to the same pins on our microcontroller. This makes our PCB significantly more simple and minimalist. 

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

[Main code](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/Code/mainc.md)


