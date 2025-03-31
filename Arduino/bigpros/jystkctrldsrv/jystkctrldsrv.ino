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
void setup() {
Serial.begin(9600);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(spin,INPUT);

digitalWrite(spin,HIGH);

mysrv.attach(srv);
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
}
