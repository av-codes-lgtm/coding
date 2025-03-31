#include <Servo.h>

//joystick pins
int xpin=A0; //VRX :- A0
int ypin=A1; //VRY :- A1
int spin=6; //SW :- pin6
            //+5v :- 5V
            //GND :- GND
//servopins
int srv=9; //brownpin :- GND
           //redpin :- 5V
           //yellowpin :- pin9 
int srvpos=0;
Servo mysrv;

int xval;
int yval;
int sval;

int dt=2;

int speedpin=5;
int dir1=4;
int dir2=3;

int mspeed;

void setup() {
Serial.begin(9600);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(spin,INPUT);

digitalWrite(spin,HIGH);

mysrv.attach(srv);

pinMode(speedpin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
}

void loop() {
xval=analogRead(xpin);
yval=analogRead(ypin);
sval=digitalRead(spin);
delay(dt);
Serial.print("X = ");
Serial.print(xval);
Serial.print(" ");
Serial.print("y = ");
Serial.print(yval);
Serial.print(" ");
Serial.print("Switch = ");
Serial.println(sval);

srvpos=yval*(170./1023.);
mysrv.write(srvpos);

if(xval<510){
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  mspeed=(-255./512.)*xval+255;
  analogWrite(speedpin,mspeed);
}


if(xval>510){
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  mspeed=(255./512.)*xval-255;
  analogWrite(speedpin,mspeed);
}
}
