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
float distanceinmeter;

int bp=A0;
int bv;

int nummes=500;
float avmes;
float avmes1;
int j;
float bucket=0;

int a=250;

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

for(j=1;j<=nummes;j=j+1){
  
  digitalWrite(tpin,LOW);
  delayMicroseconds(10);
  digitalWrite(tpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(tpin,LOW);
  pingtraveltime=pulseIn(epin,HIGH);
  pingtraveldistance=((pingtraveltime*767.269*5280.*12)/(3600.*1000000.))*0.0254*100.;
  distancetotarget=pingtraveldistance/2;
  distanceinmeter=distancetotarget/100;
  bucket=bucket+distancetotarget;
  lcd.setCursor(0,0);
  lcd.print("Measuring        ");
  lcd.setCursor(0,1);
  lcd.print("                      "); 
}
lcd.setCursor(0,0);
lcd.print("Measuring      ");
lcd.setCursor(0,1);
lcd.print("                      "); 
delay(a);  
lcd.setCursor(0,0);
lcd.print("Measuring.      ");
lcd.setCursor(0,1);
lcd.print("                      "); 
delay(a);
lcd.setCursor(0,0);
lcd.print("Measuring..       ");
lcd.setCursor(0,1);
lcd.print("                      "); 
delay(a);
lcd.setCursor(0,0);
lcd.print("Measuring...      ");
lcd.setCursor(0,1);
lcd.print("                      "); 
delay(a);
lcd.setCursor(0,0);
lcd.print("Measuring....       ");
lcd.setCursor(0,1);
lcd.print("                      "); 
delay(a);
lcd.setCursor(0,0);
lcd.print("Measuring.....       ");
lcd.setCursor(0,1);
lcd.print("                      "); 
delay(a);
lcd.setCursor(0,0);
lcd.print("Measuring......       ");
lcd.setCursor(0,1);
lcd.print("                      ");
delay(a); 

avmes=bucket/nummes;
avmes1=avmes/100;
bucket=0;

Serial.print(avmes);
lcd.clear();
lcd.setCursor(0,0);
lcd.print(avmes);
lcd.print(" cm");
lcd.setCursor(0,1);
lcd.print(avmes1);
lcd.print(" m");
delay(10000);

}
