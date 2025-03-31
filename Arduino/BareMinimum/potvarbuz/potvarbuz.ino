int out=11;
int in=A2;
float pot;
int pot1;
void setup() {
pinMode(out,OUTPUT);
pinMode(in,INPUT);
Serial.begin(9600);
}

void loop() {
pot=analogRead(in);
pot1=((9940./1023.)*pot)+60;
Serial.println(pot1);
analogWrite(out,255);
delayMicroseconds(pot1);
analogWrite(out,0);
delayMicroseconds(pot1);
}
