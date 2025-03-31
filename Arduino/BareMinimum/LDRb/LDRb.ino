int in=A2;
int lval;
int a=1;
int r=8;
int g=10;
void setup() {
pinMode(in,INPUT);
pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
Serial.begin(9600);
}

void loop() {
lval=analogRead(in);
Serial.println(lval);
delay(a);
while (lval<250) {
  digitalWrite(r,HIGH);
  digitalWrite(g,LOW);
  lval=analogRead(in);
}
digitalWrite(g,HIGH);
digitalWrite(r,LOW);
}
