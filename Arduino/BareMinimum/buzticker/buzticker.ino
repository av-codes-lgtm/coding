int out=11;
int a=1;
int b=1000;
void setup() {
pinMode(out,OUTPUT);
}

void loop() {
digitalWrite(out,HIGH);
delayMicroseconds(b);
digitalWrite(out,LOW);
delayMicroseconds(b);
}
