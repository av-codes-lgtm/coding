int r=8;
int g=9;
int b=10;
int mycol;
String msg="What colour? ";
void setup() {

Serial.begin(9600);
pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
pinMode(b,OUTPUT);
}

void loop() {
Serial.println(msg);
while (Serial.available()==0){
  
}

mycol=Serial.parseInt();
if (mycol==1){
  digitalWrite(r,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
}
//red
if (mycol==2){
  digitalWrite(r,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(b,LOW);
}
//green
if (mycol==3){
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,HIGH);
}
//blue
if (mycol==4){
  analogWrite(r,255);
  analogWrite(g,125);
  analogWrite(b,0);
}
//yellow
if (mycol==5){
  analogWrite(r,0);
  analogWrite(g,255);
  analogWrite(b,80);
}
//aqua
if (mycol==6){
  analogWrite(r,255);
  analogWrite(g,0);
  analogWrite(b,100);
}
//magenta
if (mycol==7){
  analogWrite(r,255);
  analogWrite(g,50);
  analogWrite(b,0);
}
//orange
if (mycol==8){
  analogWrite(r,0);
  analogWrite(g,255);
  analogWrite(b,255);
}
//cyan
if (mycol==9){
  analogWrite(r,255);
  analogWrite(g,0);
  analogWrite(b,150);
}
//purple
if (mycol==10){
  analogWrite(r,255);
  analogWrite(g,255);
  analogWrite(b,255);
}
//white
if (mycol==11){
  analogWrite(r,225);
  analogWrite(g,0);
  analogWrite(b,200);
}
//voilet
if (mycol==12){
  analogWrite(r,0);
  analogWrite(g,0);
  analogWrite(b,0);
}
//off
}
