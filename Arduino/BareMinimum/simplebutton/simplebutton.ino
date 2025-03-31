int bp=4;
int bv;
int a=100;
void setup() {
pinMode(bp,INPUT);
digitalWrite(bp,HIGH);
Serial.begin(9600);
}

void loop() {
bv=digitalRead(bp);
Serial.print("your button is : ");
Serial.println(bv);
delay(a);
}
