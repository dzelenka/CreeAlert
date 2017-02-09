## CreeAlert
Use a Cree Zigbee radio to create an alert light

![screenshot](https://github.com/dzelenka/CreeAlert/blob/master/P1000978.JPG)

This project was inspired by the ogiewon/CreeRelays project. He pulled a Cree Connected bulb apart and used the Zigbee board to control relays. I've created an even simpler project, a visual alert that tells me if my house perimeter is secure (all the doors and windows are closed).

## Overview
This project creates a device for use in a SmartThings environment. A smartapp watches all my perimeter devices and lights a green light when the perimeter is all closed, and blinks a red light if any of the perimeter devices is open.

It uses an Arduino, a Zigbee board from a Cree Connected bulb, and LED's, a resistor, and a tiny breadboard.

I printed a nylon case that fits over the breadboard.

## Code
CreeAlert consists of two parts:
- An Arduino sketch
- A smartapp

## Hardware Requirements
CreeRelays requires:
- Arduino Nano, UNO, or similar
- Cree Connected LED Bulb's Zigbee Board
- Red and Green LED's
- 300 ohm resistor

## Hardware Setup Instructions
Join your Cree Connected Bulb to your hub using your phone's SmartThings App BEFORE disassembling the bulb!!! (To connect it later you need to power cycle it 4 times and then leave it on.)

After removing the Zigbee board from the Cree Connected bulb, attach it to the Arduino as follows:
 - Zigbee Board Pin 1 to Arduino GND
 - Zigbee Board Pin 2 to Arduino 3.3V
 - Zigbee Board Pin 3 to Arduino Pin 2 (PWM) (not used)
 - Zigbee Board Pin 4 to Arduino Pin 3 (On/Off)
 - Resistor between Arduino GND and LED's
 - Red LED to Arduino Pin 13
 - Green LED to Arduino Pin 12
  
![screenshot](https://github.com/dzelenka/CreeRelays/blob/master/P1000970.JPG)
![screenshot](https://github.com/dzelenka/CreeRelays/blob/master/P1000971.JPG)
