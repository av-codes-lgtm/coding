#include <Servo.h>
int rpin=A1;
float rval;
int servpin=9;
float servpos=0;
Servo myserv;
int wt=1;

void setup() {
  myserv.attach(servpin);
  pinMode(rpin,INPUT);

}

void loop() {
  myserv.write(servpos);
}
