Arduino LED Blink

This is the classic "Hello World" project for Arduino. It blinks an LED connected to pin 13 on and off with a 0.5-second delay.

Components
- Arduino Uno
- 1x LED (red color)
- 220Ω resistor
- Breadboard + jumper wires

Circuit
The LED is connected to digital pin 13 through a 220Ω resistor, with the cathode (short leg) connected to ground.

here is a video of the project-- https://youtu.be/c-z7aKERBCs?si=dYlKmqBxGTrBOVfm

 Code
int redpin=13;
int dt=500;
void setup() {
  // put your setup code here, to run once:
pinMode(redpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redpin,HIGH);
delay(dt);
digitalWrite(redpin,LOW);
delay(dt);
}


How it works
setup() sets pin 13 as an output.
loop() alternates the LED state between HIGH and LOW, creating a blink with a delay of 1 second.

Lessons Learned
How to configure pins as outputs.
Basics of digitalWrite() and delay().
First step in understanding timing and pin control on Arduino.
