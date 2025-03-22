#include <LiquidCrystal.h>
#include <DHT.h>

#define Type DHT11
int spin=2;
DHT HT(spin,Type);
float humidity;
float tempC;
float tempF;
int st=500;

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
  HT.begin();
  lcd.begin(16,2);  
}

void loop() {
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true);

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%");
  Serial.print(" ");
  Serial.print("Temp: ");
  Serial.print(tempC);
  Serial.print(" C :");
  Serial.print(tempF);
  Serial.println(" F");

  lcd.setCursor(0,0);
  lcd.print("H:");
  lcd.println(humidity);
  lcd.print(" %");

  lcd.setCursor(0,1);
  lcd.print("T:");
  lcd.print(tempC);
  lcd.print("C :");
  lcd.print(tempF);
  lcd.println("F");

  delay(dt);
  lcd.clear();
  
}