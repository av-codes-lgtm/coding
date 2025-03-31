byte mbyte=B00000000;
int dt=1000;
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.print(mbyte,DEC);  
Serial.print(" : ");
Serial.print(mbyte,BIN);
Serial.print(" : ");
Serial.println(mbyte,HEX);
mbyte=mbyte+1;
delay(dt);
}
