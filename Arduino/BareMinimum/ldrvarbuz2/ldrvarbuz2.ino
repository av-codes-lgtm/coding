int in=A2;
int lval;
int b=10;
float lval1;
void setup() {
pinMode(b,OUTPUT);
pinMode(in,INPUT);
Serial.begin(9600);
}

void loop() {
lval=analogRead(in);
Serial.println(lval);
lval1=(9./550.)*lval-(1800./550.)+1;
analogWrite(b,255);
delay(lval1);
analogWrite(b,0);
delay(lval1);
}
