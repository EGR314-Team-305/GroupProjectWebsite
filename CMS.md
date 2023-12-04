---
title: Home 
---

# Component and Microcontroller Selection


## Beginning Approach

We read the project requirements very closely to ensure that we were picking components that were allowed to be used for our design. While doing research on components, we focused on parts that incorporated detailed datasheets as well as immediate accessibility. With an experience of struggling to obtain certain parts, we wanted to be certain that we had quick access to start testing and debugging our current concept selection.

We began our search with components we have worked with in class since we are familiar with them. We first listed the pros and cons of the parts we used in previous assignments, then looked for similar components that would offer solutions to the cons we had recorded. We would choose a few components with different strengths and weaknesses for subsystems that required a part not used in a previous assignment.

Once our possible choices were listed, we chose the best option, prioritizing ease of use, such as a package size manageable enough to hand solder and accessibility to external resources.

## Temperature Sensor
![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/TempSensor.jpg?raw=true)

The TC74A4 temperature sensor is a serial sensor manufactured by Microchip. It can measure temperatures between -40C and 125C and outputs data using I2C. The voltage supply range for this sensor is a minimum of 2.7V to 5.5V. We were given this sensor in class, and there was information on it provided which made the selection of this component an easy decision. This sensor is also a very manageable size, which is essential since it will be surface mounted onto the PCB.

## Motor Driver
![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MotorController.jpg?raw=true)

We ultimately decided to go with the DRV8847SPWR motor driver manufactured by Texas Instruments. While deciding on this component took a bit longer and extra steps than the other components, we mainly stuck with it because it uses I2C to communicate. All of our components are I2C, so to stick with the elegance of connections that come with I2C, we decided to go with it. 

## Motor
![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MotorImage.png?raw=true)

We instantly went with a 12V DC Reversible Gearhead Motor when choosing the motor. On top of it is a motor that is very accessible to us through ASU; we have worked with these motors in the past, and proved to be very reliable and easy to work with. Another prominent feature of this motor is its notable torque, which we knew would be more than enough for our project that would require consistently rotating blinds. 

## Light Sensor 
![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/LightSensor.jpg?raw=true)

The light sensor we chose was the VEML7700-TT manufactured by Vishay Semiconductor Opto Division. It communicates through I2C, the same as all of our components. The main factors that made us go with this sensor were its excellent price, availability, and sensitivity. The sensitivity of this sensor is incredibly customizable and precise, which is essential for getting our system to work efficiently.

## Voltage Regulator
![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/switching_regulator.jpg?raw=true)

The LM2575S-3.3 is very accessible and easy to understand with the provided datasheets found online. The regulator is easy to implement into our system and has many applications from others online and through the datasheet that we can interpret, and we could design it into our project.

## Microcontroller
![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/28-pin-soic__73519.jpg?raw=true)

The microcontroller we used for our project is the PIC18F27J53-I/SO manufactured by Microchip. The microcontroller selection was a critical decision to make, which is why we considered many factors. This microcontroller is very similar to the microcontroller we had been using in class, which is very nice since we practically had a bit of experience with it. It would make the set-up much more accessible. It also didn't have too many pins and was a decent size, which would help with the actual organization and soldering of the board. It made it relatively simple to solder to our PCB and ensure a solid connection, which would've been much more difficult had we chosen a smaller-sized PIC or one with more pins. It met all the requirements for our project and we did not struggle at all with the set-up, so it is safe to say it was a solid choice.

 After selecting our components, we needed to implement them into our central system. Each member took their respective components to test and get working. We compiled all of our data into three separate documents: [Component selection](/Comp.pdf), [Microcontroller selection](/05-Micro.pdf), and [Power budget](/Power_Budget_v2.pdf), to better view all available info on our parts.
