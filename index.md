---
title: Home 
---
 
# Home Room Weather Control System

EGR314 Fall 2023  
Professor Nichols  
Team 305  
Members:    
Nicholas Dunn  
Jack Windle  
Uriah Villa  
Diego Rodriguez  


# Table of Contents
* [Introduction](https://egr314-team-305.github.io/Team305.github.io/#introduction-team-204-semester-project)
* [Team Organization](https://egr314-team-305.github.io/Team305.github.io/#team-organization)
* [User Needs, Benchmarking and Reuirements](https://egr314-team-305.github.io/Team305.github.io/#user-needs-benchmarking-and-requirements)
* [Design Ideation and Final Selected Design](https://egr314-team-305.github.io/Team305.github.io/#design-ideation)
* [Block Diagram](https://egr314-team-305.github.io/Team305.github.io/#block-diagram)
* [Component and Microcontroller Selection](https://egr314-team-305.github.io/Team305.github.io/#block-diagram)
* [Hardware and Software Implemetation](https://egr314-team-305.github.io/Team305.github.io/#hardware-and-software-implementation)
* [System Verification](https://egr314-team-305.github.io/Team305.github.io/#system-verification)
* [Presentations](https://egr314-team-305.github.io/Team305.github.io/#presentations)
* [Appendix](https://egr314-team-305.github.io/Team305.github.io/#appendix)

## Introduction: Team 204 Semester Project   
  With entering another project based class comes a semester project. For this project, we need to create a custom weather based system that includes multiple sensors and electronical communication. For communication aspects, we intend to use ESP32 two way bluetooth communication that we will be taught in class. This will allow the user to view variable data produced by the final product we intend to create. Additional sensors for this project include motion, light, humidity, air pressure, temperature, and many more. We decided to go with light and humidity, as it fits with the project idea that will be stated below. Finally, we will need a motor and motor controller, functioning based on data given by the rest of the system.
  
  Conisidering the part requirements listed above, we decided to make a Home Room Weather Control System. This device will open and close window blinds depending on external factors, such as humidity, light and temperature. The motor will control the blinds, and at what speed they move.
  
## Team Organization
  Entering another project based class, our team needs to be a well functioning machine where every aspect works. Resulting in the team Charter, we developed a page of expectations for us to follow. This includes but is not limited to teamwork, communication, quality of work, and much more. Ensuring that all members of our group complete their share of workto a standard sufficient with our level and expectations, all members of our team have agreed to and will follow the examples mentioned in the original document, found below in [Appendix A.](https://egr314-team-305.github.io/Team305.github.io/#appendix) 

  Our mission statement is that we want to learn about the detailed creation of subsystems and circuit boards. Through the process of creating a home automation system focusing on simplicity and reliability, we can create a system of multiple functioning pieces. Although sometimes complicated, creating this system of subsystems will allow us to learn and demonstrate growth in the field of engineering

## User Needs, Benchmarking, and Requirements  
  When deciding upon which ideals are most important to the customer, we utilized a process similar to reverse engineering. We first collected multiple items similar to our desired project idea, and researched information on them. This allowed us to discover many uailities about the products, such as price, vendor, and many positive and negative reviews about each one. This allowed us to move to our next process: Jamboards.
  
  A Jamboard is a sheet of notes with every idea, note, ideals, specifications, etc., about a given topic. It is similar to a whiteboard with dozens of post-it notes all across it. Digitally, we wrote down as many notes we could think of or find in the user reviews of similar products. This created a mess for us to sort through. We then organized them by what category they fit into. Project requirements, user wants, user needs, marketing, etc. After this, we rated each note based on how important it is to us as well as the customer, thus producing our main user needs. A full copy of our user needs can be found in [Appendix B](/02-user-needs-and-requirements.pdf)

## Design Ideation and Final Desin Selection 

  After we completed our user needs, we brainstormed any ideas we coudl think of that complies with our necessary measures. This landed us with three results. The third result we thought about was an automated door opener. Second was a temperature and ligth controlled fan, which would turn on when it's too hot or lights turn on. Our final design, which is what we chose, is a Home Room Weather Control System. This chosen design would operate window blinds based on external and internal conditions. If it's raining, the humidity sensor will close the blinds through the use of a motor controlled by the system. If it's too hot inside, it will close as well. If the room is cold, then the blinds will be opened, if external conditions meet specified criteria. A full copy of our design ideation can be found in [Appendix C](/03-design-ideation.pdf)

## Block Diagram

  For this portion of our process, we had to create a chart detailing what subsystems we have, who would be acountable for them, and a general look to what's going on. This included the 3 main subsystem components and the bluetooth communication. A complete version can be found in [Appendix D](/04-Block-Diagram.pdf).
  
## Component and Microcontroller Selection  

  Once we had a plan for how the subsystems would interact with the main microcontroller, we had to decide on which parts we would utilize. For this process we researched our individual systems and discovered three pieces that would fulfill project parameters. Once this step had been completed, we selected the best of the three options to order, allowing us to finally choose all of our components...Well, most of them. [Appendix E](/05-Component-Selection(1).pdf) will show the completed document for this.

  After choosing all of our subsystem components, we still needed to choose a microcontroller. Since we are not allowed to utilize the in-class PIC device, we had to find a device similar but fit inside of our requirements. This entailed a descriptive search for a proper chip. A full view of our process and parameters can be found in [Appendix F](/05-Micro).

  We also had to make sure our selected components and microcontroller would be properly powered through the embedded subsystem. By looking through the data sheets we were able to design power rails for the project, how we'd get our power, and where each component is placed. [Appendix G](/Power_Budget_-_Sheet1_1.pdf) shows the breakdown of this process.

## Hardware and Software Implementation

## System Verification 

## Presentations 

* Checkpoint 1 Youtube Powerpoint Presentation: [https://youtu.be/rEpy6BaRJAM?si=7G1AM7mKLT2xhBXv](/https://youtu.be/rEpy6BaRJAM?si=7G1AM7mKLT2xhBXv)


## Appendix
* [Appendix A: Team Organization](/01-team-organization.pdf)
* [Appendix B: User Needs, Benchmarking, and Requirements](/02-user-needs-and-requirements.pdf)
* [Appendix C: Design Ideation](/03-design-ideation.pdf)
* [Appendix D: Block Diagram](/04-Block-Diagram.pdf)
* [Appendix E: Component Selection](/05-Component-Selection(1).pdf)
* [Appendix F: Microcontroller Selection](/05-Micro)
* [Appendix G: Power Budget](Power_Budget_-_Sheet1_1.pdf) 

## Website Coding Examples
* [Example of link text in RAW](/MicroSelect)

* [Example of external link embed in RAW](https://doadsheets/d/1ZWJujIUSddGSwfPPaxeSsj4ZDpHQYlIZ/edit#gid=2120733341)

* Image by link example
  
![image caption](https://idealab.asu.edu/assets/images/research/jumper1.png) 
