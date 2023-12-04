---
title: Home 
---
<body style="background-color:aquamarine;">
# Home Room Weather Control System

EGR314 Fall 2023  
Professor Nichols  
Team 305  
Members:    
Diego Rodriguez, Uriah Villa, Jack Windle, Nicholas Dunn

![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/Team%20Group%20Photo.jpg?raw=true)

# Table of Contents
* [Introduction](https://egr314-team-305.github.io/Team305.github.io/#introduction-team-305-semester-project)
* [Team Organization](https://egr314-team-305.github.io/Team305.github.io/#team-organization)
* [User Needs, Benchmarking and Reuirements](https://egr314-team-305.github.io/Team305.github.io/#user-needs-benchmarking-and-requirements)
* [Design Ideation and Final Selected Design](https://egr314-team-305.github.io/Team305.github.io/#design-ideation-and-final-design-selection)
* [Block Diagram](https://egr314-team-305.github.io/Team305.github.io/#block-diagram)
* [Component and Microcontroller Selection](https://egr314-team-305.github.io/Team305.github.io/#component-and-microcontroller-selection)
* [Hardware and Software Implemetation](https://egr314-team-305.github.io/Team305.github.io/#hardware-and-software-implementation)
* [System Verification and Final Presentation](https://egr314-team-305.github.io/Team305.github.io/#system-verification-and-final-presentation)
* [Lessons Learned](https://egr314-team-305.github.io/Team305.github.io/#lessons-learned)
* [Recommendations for Future Students](https://egr314-team-305.github.io/Team305.github.io/#recommendations-for-future-students)
* [Appendix](https://egr314-team-305.github.io/Team305.github.io/#appendix)

## Introduction: Team 305 Semester Project   
  With entering another project based class comes a semester project. For this project, we need to create a custom weather based system that includes multiple sensors and electronical communication. For communication aspects, we intend to use ESP32 two way WIFI communication that we will be taught in class. This will allow the user to view variable data produced by the final product we intend to create. Additional sensors for this project include motion, light, humidity, air pressure, temperature, and many more. We decided to go with light and temperature, as it fits with the project idea that will be stated below. Finally, we will need a motor and motor controller, functioning based on data given by the rest of the system.
  
  Conisidering the part requirements listed above, we decided to make a Home Room Weather Control System. This device will open and close window blinds depending on internal/external factors, light and temperature. The motor will control the blinds, and at what speed they move.
  
## Team Organization

 Our team needs to be organized in such a way that we can effectivly work together and best utilize each of our strengths.  We have defined what each member should be accountable for and how we will work together.  We wish to better ourselves and learn more about the detailed creation of subsystems and circuit boards. 
 
 In order to acomplish this, we devised roles, tasks and responsibilities for each of us to fulfill during the course of the semester. Greater details of this team formation process can be found on our [Team Organization](/Team-Organization.md) page.



## User Needs, Benchmarking, and Requirements  
  When deciding upon which ideals are most important to the customer, we utilized a process similar to reverse engineering. We first collected multiple items similar to our desired project idea, and researched information on them. This allowed us to discover many quailities about the products, such as price, vendor, and many positive and negative reviews about each one. Creating Jamboards after this allowed us to discover similarities about each item that we didn't think about. It was a very interesting [process](/UNBR.md) which took us longer than expected.

## Design Ideation and Final Design Selection 

  After we completed our user needs, we brainstormed any ideas we could think of that complies with our necessary measures. This landed us with three results. The third result we thought about was an automated door opener. Second was a temperature and light controlled fan, which would turn on when it's too hot or lights turn on. Our final design, which is what we chose, is a Home Room Weather Control System. This chosen design would operate window blinds based on external and internal conditions. If it's too bright, blinds close through the use of a motor controlled by the system. If it's too hot inside, it will close as well. If the room is cold, then the blinds will be opened, if external conditions meet specified criteria. Full details can be found on our [Design Ideation](/DIFDS.md) page.
  
  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/CAD%20model%20image.png?raw=true)


## Block Diagram

  With figuring out what project we were going to work on came the process of brainstorming the workflow of the circuit we are creating. Figuring out what we would be using and listing how it would connect with eachother was the primary focus of this portion of the project. Aiming to create a full [Block Diagram](/BD.md) would allow us to visually represent the circuit board in a clear and easy to understand form. 
  
## Component and Microcontroller Selection  

  Once we had a plan for how the subsystems would interact with the main microcontroller, we had to decide on which parts we would utilize. For this process we researched our individual systems and discovered three pieces that would fulfill project parameters. Once this step had been completed, we selected the best of the three options to order, allowing us to finally choose all of our components...Well, most of them.

  After choosing all of our subsystem components, we still needed to choose a microcontroller. Since we are not allowed to utilize the in-class PIC device, we had to find a device similar but fit inside of our requirements. This entailed a descriptive search for a proper chip.

  We also had to make sure our selected components and microcontroller would be properly powered through the embedded subsystem. By looking through the data sheets we were able to design power rails for the project, how we'd get our power, and where each component is placed. 
  
  Please check out our [Component and Microcontroller Selection](/CMS.md) page for further details regarding this process.

## Hardware and Software Implementation

  With our components selected, we had to use the program Cadence in order to generate a hardware diagram. This process was difficult due to our inexperience with the software, as well as some issues with our initial part selections. This resulting schematic for our PCB shows how each chip connects to eachother as well as the schematic for each part. 

  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/EGR%20314%20Team%20PCB%202.0%20UDV.png?raw=true)


  For the software aspects of our project, we ended up using a program called MPLab X. this software is excellent for coding microcontollers sice we can set aspects of every part we need. Ranging from complex EUSART configs to setting individual pins for input/output data, this program allowed us to complete the code for our project easily and efficiently.

  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/7b7f56bb8a7f1424fea514dc0460cb21d6accbff/media/MPLABX-MCC-EUSART1.png?raw=true)
  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/MPLABX-MCC-Pin%20Manager.png?raw=true)

  The software aspects of this project go very deep, and need a vast amount of explanation. To consolidate this info, please visit our [Hardware and Software](/HSI.md) page.


## System Verification and Final Presentation

  One of the last steps for our project is to make sure that each subsystem we created individually can be connected together. This ensures that everyone's project works, and that we worked cohesively as a team.  A final checkoff using the team PCB can be shown in the video below. A full rundown of our debugging and checkoff process can be found in our [System Verification](/SV.md) page.

{% include youtube.html id="lCwTpInNI6Q" %}

Also, in order to finalize our project, we created a full tabletop model which we rigged our working system to. This demonstrates that we not only finished the main course requirements, but went the extra mile to provide a quality and visually pleasing final product.

  ![image caption](https://github.com/EGR314-Team-305/Team305.github.io/blob/main/media/Framework%203.jpg?raw=true)


## Lessons Learned

After reflecting on the semester, we noticed that there were a lot of things that we wish we could have done differently while working on this project. Some of these lessons were learned from the previous iteration of this course that were then implemented into this semester in order to develop a successful product within the given time restraints. This section lists 10 of the most important lessons learned by the team over the course of this semester and the previous semester.

The first Lesson was to keep up with the deadlines. The deadlines are not just days to submit the assignments by but also guidelines to what you should have completed if you want to have the project ready in time. Even when a deadline is pushed back, it is important to try and get that done as soon as you can to get back on track.

The second Lesson is order your parts and components as soon as possible. Not having your components will set you back a lot since not having components won't allow you to do any testing. The sooner you have them, the easier it will be identify problems and to fix them. Ordering multiple of each component is important as well since it is very likely you might damage one or two, and also because you will be making more than one pcb/ board.

The third lesson is having good teammates. Make sure to pick teammates that you get along with. This is important since you will be spending a lot of time with your teammates working on the project so something as basic as good chemistry goes a long way. Also make sure that they have a decent work ethic and great communication skills.

The fourth lesson is optimizing your work time. This applies in every aspect within this class whether its working on inidividual assignments or working on the team project. An example of this would be like when we had to do the ESP32 Communication to MQTT communication, as we were doing that assignment we were also implememting that very same code to our Team Project code. Doing simple tandem things like this go a long way since time in this course is an extemely valuable and delicate resource.

The fifth lesson is double checking your schematic. It is a big issue if you print your team PCB and as you're soldering all the components you notice an issue. In most cases you probably won't be able to simply print another one. PCBs take time, so to prevent your team from having a panic attack towards the end of the semester, make sure everything looks good and doesn't have simple mistakes.

The sixth lesson is to use the resources available to you for help. There are many great resources available to help you succeed in this class whether its the proffesor, the TAs, the ASU tutorials website, or even classmates. The ASU tutorials website was particularly helpful when learning how to use Cadence and programming certain components. 

The seventh lesson is to make clear objectives for each assignment with your teammates. The team should split each task amongst eachother to make finishing it more efficient. Making sure everyone knows what they are working on will ensure there is always something being done and is key to success.

The eigth lesson is testing with whatever is easiest. When it came to trying to make our first sensors work, it was a bit difficult to actually test and see what it was outputting with the PIC for our main board since we didn't have MQTT communication at the time and couldnt read a serial monitor. For that reason, we first tested and debugged on the PIC (Nano) that was given to us for the class since it could be connected via usb to a computer and have the values read by the serial monitor. With this, we were able to have functioning code at an early stage for our actual PCB with only minor setup changes needed.

The ninth lesson is give your PCB as much space as you can. Unless your specific project needs to be insanely small, it is a great idea to space out all the components on the PCB as much as you can while staying within the size limit for the class. When soldering and troubleshooting the hardware, implementing this idea will go a long way when it comes to soldering the small components and having all sorts of wires or headers sticking out and obstructing the way. We found out how having so many things close together can give such a hard time while troubleshooting and increases the chances of something shorting.

The tenth lesson is similar to the previous lesson but was important to us enough to make it its own section, and that is make custom pads for headers and other components. We had a couple sensors that needed to go out via headers and wires, but we found out very quickly that premade header pads are very weak due to their small surface area. This minor thing almost gave us a heart attack as we saw important pads being torn off our PCB. If we had just made a custom pad that was slightly larger, we wouldnt have had that issue and would've not only saved us from being stressed out but also time in how long it took us to solve that issue. This experience is engrained into our heads and we will most likely be using larger pads whenever we can throughout our future.


## Recommendations for Future Students

1. It is very important to learn basic 'C' and 'Python' programming languages, particularly 'C' since pretty much all the coding for the class and project is in C. Without this skill, things can get a bit overwhelming and difficult.
2. Watching cadence tutorial videos is a must because Cadence is a decently large and complicated software with a steep learning curb. The earlier you start practicing the better. Don't try to figure it out right before the due dates unless you are trying to feel overwhelmed.
3. It is just as important to actually get cadence installed, at least one week in advance (the earlier the better). It is a big file and can take a couple of hours to install. We have also found it doesn't install so easily on certain computers, so trying to install from an early stage will allow you to figure out any difficulties you are having with the installation.
4. A big "must" is asking for help as soon as it is needed. There are many new things and topics in this class that can be quite tricky to understand and asking for help is the fastest and easiest way to get on track. Others are most likely having the same issues as you so don't feel like its just you.
5. Planning everything ahead is probably the most important on this list. Planning ahead is vital since things move very quickly in this class and lack of a plan will lead to a lot of both major and minor oversights. An example of this is figuring out the PCB tolerance requirements for the lab. Not thinking or knowing something like this ahead of time can caus you to have a PCB that will get rejected by the lab and set you back a day or two. Or another example could be in designing the PCB where you need to plan ahead and fully understand what components you are using and how they will interact with eachother and in actual use. Don't simply design the minimum requirements and then later realize you forgot to add headers to program the Microcontroller or a pad for the the power supply. In general, planning ahead helps avoid mistakes and have an idea of what has to be done at all times.

## Appendix
* [Appendix A: Team Organization](/01-team-organization.pdf)
* [Appendix B: User Needs, Benchmarking, and Requirements](/02-user-needs-and-requirements.pdf)
* [Appendix C: Design Ideation](/03-design-ideation.pdf)
* [Appendix D: Block Diagram](/media/Block-Diagram.drawio.png)
* [Appendix E: Component Selection](/Comp.pdf)
* [Appendix F: Microcontroller Selection](/05-Micro.pdf)
* [Appendix G: Power Budget](/Power_Budget_v2.pdf)
* [Appendix H: Hardware Proposal](/Cadence_Schematic.pdf)
* [Appendix I: Checkpoint 1 Youtube Powerpoint Presentation](https://youtu.be/rEpy6BaRJAM)
