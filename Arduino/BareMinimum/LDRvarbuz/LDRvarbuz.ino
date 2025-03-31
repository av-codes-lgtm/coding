int in=A2;
int lval;
int b=10;
void setup() {
pinMode(b,OUTPUT);
pinMode(in,INPUT);
Serial.begin(9600);
}

void loop() {
lval=analogRead(in);
Serial.println(lval);
analogWrite(b,255);
delayMicroseconds(lval);
analogWrite(b,0);
delayMicroseconds(lval);
lval=analogRead(in);
}
