int p=13;
int dit=50;
int dah=200;
int dah2=500;
void setup() {
pinMode(p,OUTPUT);
}

void loop() {
digitalWrite(p,HIGH);
delay(dit);
digitalWrite(p,LOW);
delay(dah);

digitalWrite(p,HIGH);
delay(dit);
digitalWrite(p,LOW);
delay(dah);

digitalWrite(p,HIGH);
delay(dit);
digitalWrite(p,LOW);
delay(dah2);

digitalWrite(p,HIGH);
delay(dah);
digitalWrite(p,LOW);
delay(dah);

digitalWrite(p,HIGH);
delay(dah);
digitalWrite(p,LOW);
delay(dah);

digitalWrite(p,HIGH);
delay(dah);
digitalWrite(p,LOW);
delay(dah2);

digitalWrite(p,HIGH);
delay(dit);
digitalWrite(p,LOW);
delay(dah);

digitalWrite(p,HIGH);
delay(dit);
digitalWrite(p,LOW);
delay(dah);

digitalWrite(p,HIGH);
delay(dit);
digitalWrite(p,LOW);
delay(1000);
}
