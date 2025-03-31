int latchpin=11;
int clockpin=9;
int datapin=12;

byte LED1s=B00011000;
byte LEDs=B11111111;

int j;
int dt(250);

void setup() {
Serial.begin(9600);
pinMode(latchpin,OUTPUT);
pinMode(clockpin,OUTPUT);
pinMode(datapin,OUTPUT);
}

void loop() {
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED1s);
digitalWrite(latchpin,HIGH);
Serial.print(LED1s,DEC);
Serial.print(" : ");
Serial.print(LED1s,HEX);
Serial.print(" : ");
Serial.println(LED1s,BIN);
delay(dt);
LED1s=LEDs-LED1s;

}
