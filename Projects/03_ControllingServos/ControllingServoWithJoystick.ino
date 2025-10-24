# include <Servo.h>
int Xpin=A0;
float Xval;
int Ypin=A1;
int Yval;
int Spin=7;
int Sval;
int Servopin=3;
float Servopos;
int buzzpin=2;
Servo myservo;
int wait=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(Spin,INPUT);
pinMode(buzzpin,OUTPUT);
digitalWrite(Spin,HIGH);
myservo.attach(Servopin);

}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
Sval=digitalRead(Spin);
Servopos=(160./1023.)*Yval;

myservo.write(Servopos);
if(Sval==0){
  digitalWrite(buzzpin,HIGH);
}
else{
  digitalWrite(buzzpin,LOW);
}
}
