 Controlling Servo with Joystick

This project shows how to use a joystick module to control the angle of a servo motor, while also triggering a buzzer when the joystick’s push button is pressed.

 Components

Arduino Uno

1x Joystick module

1x SG90 servo motor

1x Active buzzer

Breadboard + jumper wires


Circuit Connections

Connect the joystick’s X-axis pin to A0 on the Arduino (reads horizontal movement, optional).

Connect the joystick’s Y-axis pin to A1 — this controls the servo position.

Connect the joystick’s switch (SW) pin to digital pin 7 to detect when it’s pressed.

Connect the servo signal wire to digital pin 3 on the Arduino.

Connect the buzzer’s positive leg to digital pin 2, and the negative leg to GND.

Make sure all grounds (servo, joystick, buzzer, Arduino) are connected together.



🧠 How It Works

The joystick’s Y-axis sends analog values between 0–1023.

The code maps that value into a servo angle range (0–160°) using a simple formula:

Servopos = (160./1023.) * Yval;

<img width="960" height="1280" alt="image" src="https://github.com/user-attachments/assets/87b43dec-61ff-40fe-8e53-58e72f7a5b1b" />

The servo motor rotates according to the joystick’s position.

When the joystick button (SW) is pressed, the buzzer turns ON.

 Code
#include <Servo.h>

int Xpin = A0;
float Xval;
int Ypin = A1;
int Yval;
int Spin = 7;
int Sval;
int Servopin = 3;
float Servopos;
int buzzpin = 2;
Servo myservo;
int wait = 250;

void setup() {
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(Spin, INPUT);
  pinMode(buzzpin, OUTPUT);
  digitalWrite(Spin, HIGH);
  myservo.attach(Servopin);
}

void loop() {
  Xval = analogRead(Xpin);
  Yval = analogRead(Ypin);
  Sval = digitalRead(Spin);
  Servopos = (160. / 1023.) * Yval;

  myservo.write(Servopos);

  if (Sval == 0) {
    digitalWrite(buzzpin, HIGH);
  } else {
    digitalWrite(buzzpin, LOW);
  }
}

 Demo Video
https://youtu.be/KywsLONQxDY?si=WjaO1B0KkbgVdG2Z


 Lessons Learned

How to read analog values from a joystick.

How to map input ranges (0–1023 ➜ 0–160°).

How to control a servo motor using PWM.

How to combine sensor input + mechanical output in one project.

Understanding the joystick button (SW) function for triggering events.
