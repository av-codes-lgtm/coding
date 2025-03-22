#include <Servo.h>
int rpin=A1;
float rval;
int servpin=9;
float servpos;
Servo myserv;
int wt=10;

void setup() {
  Serial.begin(9600);
  myserv.attach(servpin);
  pinMode(rpin,INPUT);

}

void loop() {
  rval=analogRead(rpin);
  servpos=(180./646.)*rval;
  Serial.print(rval);
  Serial.print(" ");
  Serial.println(servpos);
  myserv.write(servpos);
  delay(wt);

}
