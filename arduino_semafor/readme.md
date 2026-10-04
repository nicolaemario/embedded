# Arduino Traffic Lights using Wokwi

## Introduction

**PROJECT LINK:** https://wokwi.com/projects/476977379942980609

The project features 4 files:

- **diagram.json**      - Wowki data represented in JSON format
- **readme.txt**        -  A project ReadMe for documentation
- **sketch.ino**        - The Arduino code for the microcontroller
- **wokwi-project.txt** - Wokwi auto-generated text with basic info

## Used Components

- Arduino Uno
- Red LED
- Yellow LED
- Green LED
- 3 resistors, 200 Ω resistance each
- Button
- Connection Wires


## How It Works

1. When the Arduino Microcontroller is turned on, the red light is, by default, lit up.
2. By pressing the button, the following occur:
        - For 3000ms (3s), the yellow LED lights up and the red one lights off
        - After the yellow LED lights off: for 5000ms (5s), the green LED lights up
        - Then, the green LED lights off and the red light turns on again.
3. Repeat

## Exercised Functions

- millis() : returns the time count since the Arduino Microcontroller is ON. Useful for time calculations when lights change.

- digitalRead(pin) : reads the state of a digital pin (LOW or HIGH) and returns it; useful for checking the input of the used button.

- digitalWrite(pin, value) : sets a digital pin to LOW or HIGH; used for turning on and off the LED lights.

- pinMode(pin, mod) : sets a pin's functionality mode as OUTPUT or INPUT. LEDs are set as OUTPUT, while the button is set as INPUT.

- setup() : runs once and sets up the pins.

- loop() : repeatedly executes while the Arduino Microcontroller is turned on.

## Conclusions

By making this project, I have practiced my embedded skills on a simple, yet valuable-in-learning project. I have also practiced my git/versioning skills and writing ReadMe texts. Therefore, I consider this project a win in my learning journey.
