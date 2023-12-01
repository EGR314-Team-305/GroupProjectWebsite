---
Title: Component and Microcontroller Selection
---
 
# Beginning Approach
We read the project requirements very closely to ensure that we were picking components that are allowed to use for our design. While doing research on components, we focused on parts that incorporated detailed datasheets as well as immediate accessibility. With past experience of struggling to obtain certain parts, we wanted to be certain that we had immediate access to start testing and debugging our current concept selection.

We began our search with components that we have worked with in class since we are familiar with them. We first listed out the pros and cons of the parts we used in previous assignments then we would look for similar components that would offer solutions to the cons we had listed. For subsystems that required a part not used in a previous assignment we would choose a few components that each had different strengths and weaknesses.

Once our possible choices were listed out we then chose the best option prioritizing ease of use, such as a package size manageable enough to hand solder as well as accesibility to external recources.

# Temperature Sensor
The TC74A4 temperature sensor is a serial sensor manufactured by Microchip. It can measure temperatures between -40C to 125C and outputs data using I2C. The voltage supply range for this sensor is a minimum of 2.7V to 5.5V. We were given this sensor in class and there was information on it provided which made the selection of this component an easy decision. This sensor is also a very manageable size which is important since it will be surface mounted onto the PCB.

# Motor Driver
We ultimately decided to go with the DRV8847SPWR motor driver manufactured by Texas Instruments. While deciding on this component took a bit longer and extra steps than the other components, the main reason that made us stick with it is purely because it uses I2C to communicate. All of our components are I2C, so to stick with the elegance of connections that comes with I2C we made our final decision to go with it. 

# Motor
When it came to choosing the motor itself, we instantly went with a 12V DC Reversible Gearhead Motor. On top of it being a motor that is very accessible to us through ASU, we have worked with these motors in the past and proved to be very reiable and easy to work with. Another major feature from this motor is its notable torque, which we knew would be mor ethan enough for our project that would require to consitently rotate blinds. 

# Light Sensor 
The light sensor we chose was the VEML7700-TT manufactured by Vishay Semiconductor Opto Division. It communicates through I2C, same as all of our components. The main factors that made us go with this sensor were its nice price, availability, and sensitivity. The sensitvity of this sensor is greatly customizeable and precise, which is essential for getting our system to work efficiently.

# Microcontroller
Our microcontroller that we went with for our project is the PIC18F27J53-I/SO manufactured by Microchip. The microcontroller selection was a very important decision to make which is why we took many factors into consideration. This microcontroller is very similar to the microcontroller we had been using in class, which is very nice since we practically had a bit of experience with it and would make the set-up much easier. It also didn't have too many pins and was a decent size which would help with the actual organization and soldering of the board. It resulted in being quite simple to solder to our PCB and ensure a solid connection, which would've been much more difficult had we chosen a smaller-sized PIC or one with more pins. It met all the requirements for our project and we did not struggle at all with the set-up, so it is safe to say it was a solid choice.
