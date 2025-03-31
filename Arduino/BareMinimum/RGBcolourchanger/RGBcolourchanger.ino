int in=A2;
int a=250;
int r=13;
int g=12;
int b=11;
float inv;
float inv2;
float rv;
void setup() {
pinMode(in,INPUT);
pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
pinMode(b,OUTPUT);
Serial.begin(9600);
}

void loop() {
rv=analogRead(in);
inv=(255./1023.)*rv;
Serial.println(inv);
delay(1);
inv2=-inv;
analogWrite(r,inv);
analogWrite(g,inv);
analogWrite(b,inv);
}
