Potentiometer LED Dimmer

This project uses a potentiometer (variable resistor) to control the brightness of an LED.

Components

Arduino Uno 

1x LED (red color)

220Ω resistor

1x 10kΩ potentiometer

Breadboard + jumper wires

Circuit

Potentiometer middle pin → A0

Potentiometer side pins → 5V and GND

LED anode (+) → Pin 11 through 220Ω resistor

LED cathode (–) → GND

[my manual calculation!] ----  <img width="960" height="1280" alt="image" src="https://github.com/user-attachments/assets/e4e16498-13ba-44c1-bfd0-648eaf3a7439" />


https://youtu.be/bD1tHby2TJk?si=lb9sk_RIh29fJhuq

code:
int potval;
int redpin=11;
int potpin=A0;
int LEDVal;
int dt=250;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redpin,OUTPUT);
pinMode(potpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(potpin);
LEDVal=(255./1023.)*potval;
Serial.println(LEDVal);
analogWrite(redpin,LEDVal);
}

How it works

analogRead(A0) reads the potentiometer’s position (0–1023).

manual calculations, using a formular converts that value into a PWM range (0–255).

analogWrite() uses PWM to control LED brightness.

Lessons Learned

How to read analog inputs from sensors like potentiometers.

using gradient of a line from math class to do something so useful.

Introduction to PWM (Pulse Width Modulation) for analog-like output.
