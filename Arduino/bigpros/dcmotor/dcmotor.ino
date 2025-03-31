int speedpin=5;
int dir1=4;
int dir2=3;
int sspeed=255;
int mspeed=60;

void setup() {
pinMode(speedpin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedpin,sspeed);
delay(5);
analogWrite(speedpin,mspeed);
delay(1000);
}
