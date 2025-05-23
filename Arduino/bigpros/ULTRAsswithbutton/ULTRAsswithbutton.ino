#include <LiquidCrystal.h>

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int tpin=2;
int epin=3;
int pingtraveltime;
float pingtraveldistance;
float distancetotarget;
float ditsanceinmeter;

int bp=A0;
int bv;

void setup() {
pinMode(tpin,OUTPUT);
pinMode(epin,INPUT);

pinMode(bp,INPUT);
digitalWrite(bp,HIGH);

Serial.begin(9600);
lcd.begin(16,20);
}

void loop() {
lcd.setCursor(0,0);
lcd.print("Place The Target.");
lcd.setCursor(0,1);
lcd.print("Press To Measure.");
bv=digitalRead(bp);
while(bv==1){
  bv=digitalRead(bp);
}
digitalWrite(tpin,LOW);
delayMicroseconds(10);
digitalWrite(tpin,HIGH);
delayMicroseconds(10);
digitalWrite(tpin,LOW);
pingtraveltime=pulseIn(epin,HIGH);
pingtraveldistance=((pingtraveltime*767.269*5280.*12)/(3600.*1000000.))*0.0254*100.;
distancetotarget=pingtraveldistance/2;
ditsanceinmeter=distancetotarget/100;
Serial.print(0);
Serial.print(",");
Serial.print(distancetotarget);
Serial.print(",");
Serial.println(15);
lcd.clear();
lcd.setCursor(0,0);
lcd.print(distancetotarget);
lcd.print(" cm");
lcd.setCursor(0,1);
lcd.print(ditsanceinmeter);
lcd.print(" m");
delay(5000);

}
