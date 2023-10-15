![corgAI](image1.png)

This project was submitted to Hack the Valley 8. Check out the [Devpost!](https://devpost.com/software/corgai)

## What it does
corgAI is a little corgi stuffy that will listen when you wave to it, and then respond to the query. Designed for kids, corgAI is always there to listen, and exists to inspire curiosity in children everywhere. 

## How we built it
In the course of 36 hours, we built and programmed a custom pcb with a mic, a speaker + amplifier, an IR sensor, and two ESP32s connected over UART. One ESP32 runs the speech-to-text using Google Cloud API and sends the question to ChatGPT's API, while the other handles text-to-speech with ChatGPT's response and the speaker. The IR sensor is used to indicate when to start listening. The circuit board is powered by an elegoo 3.3/5v power module which can be connected directly to a laptop/wall, or to a battery (for when its in the stuffy!)

## Challenges we ran into
Literally every step we got to we encountered a new problem. To start, we both have never touched hardware. We winged/yoloed every single part of this pcb, and it works! (kinda..). While soldering, we continuously soldered things incorrectly and had to redo parts, or our plans didn't pan out. We drew out the schematic of how we wanted to wire things, but didn't account for the height of the overlapping parts. Also, we broke the speaker multiple times by burning it.

It does not stop there! Even after its first power on, and after diagnosing all the problems that made different parts not turn on, we were met with every software issue possible. Things like drivers that weren't installed, the wrong version of our board, incorrect libraries, + much more. 

## Accomplishments that we're proud of
Everything! This whole project in and of itself is a huge accomplishment, we completed our first hardware hack, we learned SO much about PCBs and electrical components. Even further, we learned a lot about using Google Cloud API and ChatGPT API. Both of us have used some API's before, but on a much simpler scale. We also got to get both API's to work in tandem, which is super cool to see.