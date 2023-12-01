---
title: Home 
---
 
# Home Room Weather Control System

EGR314 Fall 2023  
Professor Nichols  
Team 305  
Members:    
Diego Rodriguez, Uriah Villa, Jack Windle, Nicholas Dunn

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/Team%20Group%20Photo.jpg?raw=true)

# Table of Contents
* [Introduction](https://egr314-team-305.github.io/Team305.github.io/#introduction-team-204-semester-project)
* [Team Organization](https://egr314-team-305.github.io/Team305.github.io/#team-organization)
* [User Needs, Benchmarking and Reuirements](https://egr314-team-305.github.io/Team305.github.io/#user-needs-benchmarking-and-requirements)
* [Design Ideation and Final Selected Design](https://egr314-team-305.github.io/Team305.github.io/#design-ideation-and-final-design-selection)
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

 Our team needs to be organized in such a way that we can effectivly work together and best utilize each of our strengths.  We have defined what each member should be accountable for and how we will work together.  We wish to better ourselves and learn more about the detailed creation of subsystems and circuit boards. 
 
 In order to acomplish this, we devised roles, tasks and responsibilities for each of us to fulfill during the course of the semester. Greater details of this team formation process can be found on our [Team Organization](/Team-Organization.md) page.



## User Needs, Benchmarking, and Requirements  
  When deciding upon which ideals are most important to the customer, we utilized a process similar to reverse engineering. We first collected multiple items similar to our desired project idea, and researched information on them. This allowed us to discover many quailities about the products, such as price, vendor, and many positive and negative reviews about each one. Creating Jamboards after this allowed us to discover similarities about each item that we didn't think about. It was a very interesting [process](/UNBR.md) which took us longer than expected.

## Design Ideation and Final Design Selection 

  After we completed our user needs, we brainstormed any ideas we could think of that complies with our necessary measures. This landed us with three results. The third result we thought about was an automated door opener. Second was a temperature and ligth controlled fan, which would turn on when it's too hot or lights turn on. Our final design, which is what we chose, is a Home Room Weather Control System. This chosen design would operate window blinds based on external and internal conditions. If it's raining, the humidity sensor will close the blinds through the use of a motor controlled by the system. If it's too hot inside, it will close as well. If the room is cold, then the blinds will be opened, if external conditions meet specified criteria. A full copy of our design ideation can be found in [Appendix C](/03-design-ideation.pdf)
  
  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/CAD%20model%20image.png?raw=true)
  
CAD model produced and supplied by Deigo Rodriguez.

* Full details here on [Design Ideation](/DIFDS.md) page.

## Block Diagram

  With figuring out what project we were going to work on came the process of brainstorming the workflow of the circuit we are creating. Figuring out what we would be using and listing how it would connect with eachother was the primary focus of this portion of the project. Aiming to create a full [Block Diagram](/BD.md) would allow us to visually represent the circuit board in a clear and easy to understand form. 
  
## Component and Microcontroller Selection  

  Once we had a plan for how the subsystems would interact with the main microcontroller, we had to decide on which parts we would utilize. For this process we researched our individual systems and discovered three pieces that would fulfill project parameters. Once this step had been completed, we selected the best of the three options to order, allowing us to finally choose all of our components...Well, most of them. [Appendix E](/Comp.pdf) will show the completed document for this. (if the Appendix link is broken you can find the fixed document at [this fixed link](https://docs.google.com/document/d/16Z2PJg_yhHUm5j5tgeRhERfs_CeCkvM5h7oL5msZcgY/edit?usp=sharing)

  After choosing all of our subsystem components, we still needed to choose a microcontroller. Since we are not allowed to utilize the in-class PIC device, we had to find a device similar but fit inside of our requirements. This entailed a descriptive search for a proper chip. A full view of our process and parameters can be found in [Appendix F](/05-Micro.pdf).

  We also had to make sure our selected components and microcontroller would be properly powered through the embedded subsystem. By looking through the data sheets we were able to design power rails for the project, how we'd get our power, and where each component is placed. [Appendix G](/Power_Budget_-_Sheet1_1.pdf) shows the breakdown of this process.

* [Component and Microcontroller Selection](/CMS.md).

## Hardware and Software Implementation

  With our components selected, we had to use the program Cadence in order to generate a hardware diagram. This process was difficult due to our inexperience with the software, as well as some issues with our initial part selections. This resulting schematic for our PCB shows how each chip connects to eachother as well as the schematic for each part. 

  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/EGR%20314%20Team%20PCB%202.0%20UDV.png?raw=true)


  For the software aspects of our project, we ended up using a program called MPLab X. this software is excellent for coding microcontollers sice we can set aspects of every part we need. Ranging from complex EUSART configs to setting individual pins for input/output data, this program allowed us to complete the code for our project easily and efficiently.

  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/7b7f56bb8a7f1424fea514dc0460cb21d6accbff/media/MPLABX-MCC-EUSART1.png?raw=true)
  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-Pin%20Manager.png?raw=true)

  The software aspects of this project go very deep, and need a vast amount of explanation. To consolidate this info, please visit our [Hardware and Software](/HSI.md) page.

## System Verification 

  One of the last steps for our project is to make sure that each subsystem we created individually can be connected together. This ensures that everyone's project works, and that we worked cohesively as a team.  A final checkoff using the team PCB can be shown in the video below. A full rundown of our debugging and checkoff process can be found in our [System Verification](/SV.md) page.

{% include youtube.html id="lCwTpInNI6Q" %}

Also, in order to finalize our project, we created a full tabletop model which we rigged our working system to. This demonstrates that we not only finished the main course requirements, but went the extra mile to provide a quality and visually pleasing final product.

  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/Framework%203.jpg?raw=true)

## Presentations 

* Checkpoint 1 Youtube Powerpoint Presentation: [youtube](/https://youtu.be/rEpy6BaRJAM?si=7G1AM7mKLT2xhBXv)



## Appendix
* [Appendix A: Team Organization](/01-team-organization.pdf)
* [Appendix B: User Needs, Benchmarking, and Requirements](/02-user-needs-and-requirements.pdf)
* [Appendix C: Design Ideation](/03-design-ideation.pdf)
* [Appendix D: Block Diagram](/media/Block-Diagram.drawio.png)
* [Appendix E: Component Selection](/Comp)
* [Appendix F: Microcontroller Selection](/05-Micro)
* [Appendix G: Power Budget](/Power_Budget_-_Sheet1_1.pdf)
* [Appendix H: Hardware Proposal](/png2pdf.pdf)

## Website Coding Examples
* [Example of link text in RAW](/MicroSelect)

* [Test subpage beta](/T-O) links to a download

* [Test subpage](/T-O.md) works. This one links to a subpage. Make sure it includes .md at the end

* [Example of external link embed in RAW](https://doadsheets/d/1ZWJujIUSddGSwfPPaxeSsj4ZDpHQYlIZ/edit#gid=2120733341)

* Image by link example
  
![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/idealab.asu.edu-assets-jumper1.png?raw=true)

"And here's to you, <span style="background-color:green">Mrs. Robinson</span>, Jesus loves you more than you will know."
<div style="background-color:rgba(0, 0, 0, 0.0470588); text-align:center; vertical-align: middle; padding:40px 0;">
<a href="/donate">DONATE</a>
</div>

<div style="background-color:rgba(0, 0, 0, 0.0470588); text-align:center; vertical-align: middle; padding:40px 0; margin-top:30px">
<a href="/blog">VIEW THE BLOG</a>
</div>

{% include youtube.html id="JLMbpiywVxQ" %}

{% include youtube.html id="dQw4w9WgXcQ" %}
