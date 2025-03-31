int speedpin=5;
int dir1=4;
int dir2=3;
int sspeed=255;
int mspeed=255;

int tiltpin=2;
int tiltval;

void setup() {
pinMode(speedpin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);

pinMode(tiltpin,INPUT);
digitalWrite(tiltpin,HIGH);

Serial.begin(9600);
}

void loop() {
tiltval=digitalRead(tiltpin);

digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
if(tiltval==1){
  analogWrite(speedpin,sspeed);
  delay(5);
  analogWrite(speedpin,mspeed);
  delay(1000);
}
else{
  analogWrite(speedpin,0);
  delay(5);
  analogWrite(speedpin,0);
  delay(1000);
}
}
