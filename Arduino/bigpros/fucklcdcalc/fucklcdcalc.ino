#include <LiquidCrystal.h>

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int j;

String msg1="1st number is : ";
String msg2="2nd number is : ";
String msg3="Input(+,-,*,/) : ";
String msg4="Your answer is : ";

float input1;
float input2;
float output;

int op;
String op1;

void setup() {
  lcd.begin(16,20);
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print(msg1);
  while(Serial.available()==0){
  }
  input1=Serial.parseFloat();
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print(msg2);
  while(Serial.available()==1){
  }
  input2=Serial.parseFloat();
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print(msg3);
  while(Serial.available()==1){
  }
  op=Serial.parseInt();
  lcd.clear();

  if(op==1){
    output=input1+input2;
    op1="+";
  }
  else if(op==2){
    output=input1-input2;
    op1="-";
  }
  else if(op==8){
    output=input1*input2;
    op1="*";
  }
  else if(op==5){
    output=input1/input2;
    op1="/";
  }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(input1);
  lcd.print(op1);
  lcd.print(input2);
  lcd.print(" = ");
  lcd.setCursor(0,1);
  lcd.print(output);
  delay(10000);
  lcd.clear();
}
