int in=A0;
int out=9;
int a=100;
float inv;
void setup() {
pinMode(in,INPUT);
pinMode(out,OUTPUT);
Serial.begin(9600);
}

void loop() {
inv=analogRead(in);
Serial.println(inv);
delay(a);

while (inv>=1000) {
  digitalWrite(out,HIGH);
  inv=analogRead(in);
  Serial.println(inv);
  delay(a);
  }
digitalWrite(out,LOW);
}
