## CreeAlert
Use a Cree Zigbee radio to create an alert light

![screenshot](https://github.com/dzelenka/CreeRelays/blob/master/P1000969.JPG)

This project was inspired by the ogiewon/CreeRelays project. He pulled a Cree Connected bulb apart and used it to control relays. I've created an even simpler project
This is a fork of the ogiewon/CreeRelays project. I've changed the little Arduino model, but otherwise duplicated his equipment. I wanted to take advantage of his work to build a functional 2x garage door opener. I eventually drifted away from all his code, but we still owe him for the original good work and inspiration!

## Overview
ogiewon wrote a device driver for his hardware device. I used a different paradigm for the project...

## Code
CreeRelays consists of two parts:
- The CreeAlert Arduino sketch
- The CreeAlert smartapp

## Hardware Requirements
CreeRelays requires:
- Arduino Nano, UNO, or similar
- Cree Connected LED Bulb's Zigbee Communication Board
- Red and Green LED's
- 300 ohm resistor

## Hardware Setup Instructions
Join your Cree Connected Bulb to your hub using your phone's SmartThings App BEFORE disassembling the bulb!!! (To connect it later you need to power cycle it 4 times and then leave it on.)

After removing the Zigbee board from the Cree Connected bulb, attach it to the Arduino as follows:
 - Zigbee Board Pin 1 to Arduino GND
 - Zigbee Board Pin 2 to Arduino 3.3V
 - Zigbee Board Pin 3 to Arduino Pin 2 (PWM)
 - Zigbee Board Pin 4 to Arduino Pin 3 (On/Off) (not used by my code)
 - Relay GND to Arduino GND
 - Relay IN1 to Arduino Pin 4
 - Relay IN2 to Arduino Pin 5
 - Relay VCC to Arduino 5V
  
##CreeRelay to Garage Door Buttons
The original project ogiewon/CreeRelays was a proof of concept. I've simplified the code and tried to make it more SmartThings like. I've got a working prototype and intend to connect it to an Adafruit Metro Mini 328. I'll 3D print a case and install it in my garage. Pictures to follow...

My smartapp allows multiple button devices to activate the relays. I could have a physical fob with a button in the car to replace my existing door opener. 

Update: Here are some snaps of my final result, ready to mount in the garage:
![screenshot](https://github.com/dzelenka/CreeRelays/blob/master/P1000970.JPG)
![screenshot](https://github.com/dzelenka/CreeRelays/blob/master/P1000971.JPG)
