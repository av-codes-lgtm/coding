#include <Servo.h>
int srv=9;
int LDR;
int in=A1;
Servo mysrv;

void setup() {
Serial.begin(9600);
pinMode(in,INPUT);
mysrv.attach(srv);
}

void loop() {
LDR=analogRead(in);
if(LDR>=100){
  mysrv.write(0);
}
if(LDR<=100){
  mysrv.write(180);
}
Serial.println(LDR);
}
