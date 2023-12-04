---
title: Home 
---
 
# Design Ideation and Final Design Selection

After we completed our user needs, we brainstormed any ideas we could think of that complied with our necessary measures. This landed us with three results. The first idea was a home automation system that would open and close blinds depending on the temperature and brightness in a room. The Second was a temperature and light-controlled fan, which would turn on when it was too hot or lights turned on. The third result we thought of was an automated door opener that senses when someone is near and will open the door. After much consideration, the Home Room Weather Control System made the most sense to us. This idea would be best since it needs the exact number of components and sensors to make it work for the requirements of this project, unlike the other ideas. 
  
This project would operate by reading the internal conditions of a room to control the blinds. If it is too bright, the light sensor will close the blinds using a motor controlled by the system. If it is too hot inside, it will close as well, and if the room is cold, then the blinds will open. The wireless control will allow the user to have complete remote control of the blind setting for their convenience. The blinds will have presets and a close/open increment button for simplicity. The blind settings will also have an automatic mode that can be set so the blinds will open and close to certain levels depending on the time of day and/or amount of light. The blinds and window will contain all the parts, requiring only a one-time setup process. Also, the unit will plug into standard US AC wall power, allowing it to be used anywhere an outlet is nearby. In summary, it is designed to control blinds intuitively.
  
  ![image caption](https://media.discordapp.net/attachments/1143291596109009090/1162829343786029066/image.png?ex=653d5c37&is=652ae737&hm=eabc8d34cc643f13a9d049c900424b8f452648014a2796a559ec32e0f126325a&=&width=374&height=473)

  This chosen project allowed us to satisfy the project requirements. Next was a case of designing our subsystems and figuring out what parts we would use. This entailed creating a block diagram of how our subsystems would interact with each other and what components we would need to choose.

# Block Diagram
  ![image caption]()

 Here, in the block diagram, we sorted the different sections and subsystems of the project between each of our team members. Nicholas was in charge of getting the ESP32 to communicate with the microcontroller we selected and a Wi-Fi-enabled device, in our case, a smartphone. Diego was the head of the temp sensor subsystem, got the temp sensor to communicate with the microcontroller through I2C, and was the lead in the code of the main project. Jack was the lead designer of the light sensor subsystem, communicating through I2C to the microcontroller, and was the co-lead in developing the main code for the project. Uriah was the lead designer of the voltage regulator for the system and for the motor driver to be controlled through I2C.

 Later in the project, we split much of the work into different sections, with Uriah designing, building, and testing the team PCB that was milled and printed from JLPCB. Once the board was fully assembled and tested for wiring mistakes or shorts. Jack and Diego went through the debugging process with the software and checked that they could read the serial values received from the temp and light sensors. When our board was finished, and the code was ready, Nick was able to build the physical structure of the blinds, and Diego was able to 3D print the enclosure for the team board and sensors.
