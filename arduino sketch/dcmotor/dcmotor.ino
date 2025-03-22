#include <Servo.h>

int speed=5;
int dir1=6;
int dir2=7;
float motsp;

int xpin=A1;
int ypin=A2;
float xval;
float yval;

int servpin=9;
float servpos;
Servo myserv;
int wt=10;

void setup() {
  
  Serial.begin(9600);
  pinMode(speed,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(xpin,INPUT);
  pinMode(ypin,INPUT);

  myserv.attach(servpin);

}

void loop() {
  xval=analogRead(xpin);
  yval=analogRead(ypin);
  servpos=(180./1023.)*yval;

  Serial.print(servpos);
  Serial.print(",");
  Serial.print(motsp);
  Serial.println(",");
  
  myserv.write(servpos);

  if (xval>512){
    motsp=((255./511.5)*xval)-255;
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    analogWrite(speed,motsp);
  }
  if (xval<512){
    motsp=(-(255./511.5)*xval)+255;
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    analogWrite(speed,motsp);
  }
  delay(wt);
}
