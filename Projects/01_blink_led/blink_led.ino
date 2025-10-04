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
