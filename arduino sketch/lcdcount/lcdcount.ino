#include <LiquidCrystal.h>

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int dt=200;
int num=1;

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);  
}

void loop() {
  while(num<=100){
    lcd.setCursor(0,0);
    lcd.print("Watch me count...");
    lcd.setCursor(0,1);
    lcd.print(num);
    num=num+1;
    delay(dt);
    lcd.clear();
    if (num==101){
      num=1;
    }
  }
  
}