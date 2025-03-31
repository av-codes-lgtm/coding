int a=9;
int b=255;
int c=25;
void setup() {
pinMode(a,OUTPUT);
}

void loop() {
analogWrite(a,b);
delay(c);
analogWrite(a,b-25);
delay(c);
analogWrite(a,b-50);
delay(c);
analogWrite(a,b-75);
delay(c);
analogWrite(a,b-100);
delay(c);
analogWrite(a,b-125);
delay(c);
analogWrite(a,b-150);
delay(c);
analogWrite(a,b-175);
delay(c);
analogWrite(a,b-200);
delay(c);
analogWrite(a,0);
delay(100);
}
