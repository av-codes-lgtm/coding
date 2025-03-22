#include <Stepper.h>
int stepsPerRevolution=2048;
int motspeed=15;
int dt=500;

int red=13;
int green=12;

int bpin=2;
int bold=0;
int bnew;
int motdir=1;

Stepper mystep(stepsPerRevolution, 8,10,9,11);

void setup() {
  Serial.begin(9600);
  mystep.setSpeed(motspeed);
  
  pinMode(bpin,INPUT);
  digitalWrite(bpin,HIGH);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  bnew=digitalRead(bpin);
  Serial.println(bold);
  
  if(bold==1){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
  }
    if(bold==0){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
  }

  if (bold==0 && bnew==1){
    motdir=motdir*(-1);
  }
  if (motdir==1){
    mystep.step(motdir);
  }
   if (motdir==-1){
    mystep.step(motdir);
  }
  bold=bnew;

}
