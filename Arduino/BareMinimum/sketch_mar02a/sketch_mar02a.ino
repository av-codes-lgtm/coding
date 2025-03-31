int a=A3;
float V2=0;
int c=250;
int rval;
void setup() {
pinMode(a,INPUT);
Serial.begin(9600);
}

void loop() {
rval=analogRead(a);
V2=(5./1023.)*rval;
Serial.println(V2);
delay(c);
}
