#include <LiquidCrystal.h>

int trig=4;
int echo=5;

float pttime;
float distm;
float distcm;

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(10);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  pttime=pulseIn(echo,HIGH);

  distm=((331.29*pttime)/pow(10,6))/2;
  distcm=((331.29*100*pttime)/pow(10,6))/2;
  
  Serial.print(25);
  Serial.print(",");
  Serial.print(0);
  Serial.print(",");
  Serial.print(distm);
  Serial.print(",");
  Serial.println(distcm);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Dist m:- ");
  lcd.print(distm);
  lcd.println("m");
  lcd.setCursor(0,1);
  lcd.print("Dist cm:- ");
  lcd.print(distcm);
  lcd.println("cm");
  delay(100);
  
}
