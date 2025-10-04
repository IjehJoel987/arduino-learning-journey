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
