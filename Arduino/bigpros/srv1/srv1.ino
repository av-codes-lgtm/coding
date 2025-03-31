#include <Servo.h>
int srv=9;
int srvpos=0;
Servo mysrv;

void setup() {
Serial.begin(9600);
mysrv.attach(srv);
}

void loop() {
Serial.println("What angle of servo?");
while(Serial.available()==0){
  
}
srvpos=Serial.parseInt();
mysrv.write(srvpos);
}
