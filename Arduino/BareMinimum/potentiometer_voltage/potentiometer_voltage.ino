int in=A2;
float rv;
float V2;
int a=250;
void setup() {
Serial.begin(9600);
}

void loop() {
rv=analogRead(in);
V2=(5./1023.)*rv;
Serial.println(V2);
delay(a);
}
