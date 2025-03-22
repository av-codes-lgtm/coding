int potpin=A2;
int rval;
float V2;
int wt=50;

int red=13;
int blue=12;
int green=11;

void setup() {
pinMode(potpin,INPUT);
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
Serial.begin(9600);

}

void loop() {
rval=analogRead(potpin);
V2=(5./1023.)*rval;

Serial.println(V2);

if (V2>4.0){
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
}
if (V2<4.0 && V2>3.0){
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
}
if (V2<3.0){
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
}
delay(wt);
}
