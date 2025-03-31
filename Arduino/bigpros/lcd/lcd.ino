#include <LiquidCrystal.h>

int rs=7;//RS :- pin7
int en=8;//EN :- pin8
int d4=9;//D4 :- pin9
int d5=10;//D5 :- pin10
int d6=11;//D6 :- pin11
int d7=12;//D7 :- pin12

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int j;

void setup() {
  lcd.begin(16,20);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Watch me count");
  for(j=1;j<=100;j=j+1){
    lcd.setCursor(0,1);
    lcd.print(j);
    delay(500);
  }
  lcd.clear();  
}
