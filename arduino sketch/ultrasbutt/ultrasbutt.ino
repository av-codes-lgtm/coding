#include <LiquidCrystal.h>
int bpin=3;
int bval;

int j;

int trig=4;
int echo=5;

float pttime;
float pttime1;
float pttime2;
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
  pinMode(bpin,INPUT);
}

void loop() {  
  bval=digitalRead(bpin);
  Serial.println("Ready...");
  lcd.setCursor(0,0);
  lcd.println("Ready...");
  
  while(bval==0){
    bval=digitalRead(bpin);
  }
  
  for(j=1;j<=10;j=j+1){
    digitalWrite(trig,LOW);
    delayMicroseconds(10);
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW);
    pttime=pulseIn(echo,HIGH);
    pttime1=pttime1+pttime;
  }
  pttime2=pttime1/10;
  distm=((331.29*pttime)/pow(10,6))/2;
  distcm=((331.29*100*pttime)/pow(10,6))/2;
  
  Serial.print(25);
  Serial.print(",");
  Serial.print(0);
  Serial.print(distm);
  Serial.print(",");
  Serial.println(distcm);
    
  lcd.setCursor(0,0);
  lcd.print("Dist m:- ");
  lcd.print(distm);
  lcd.println("m");
  lcd.setCursor(0,1);
  lcd.print("Dist cm:- ");
  lcd.print(distcm);
  lcd.println("cm");
  delay(5000);  
  lcd.clear(); 
  
}
