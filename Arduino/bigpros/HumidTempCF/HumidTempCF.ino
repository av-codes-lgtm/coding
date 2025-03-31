#include <DHT.h>
#include <LiquidCrystal.h>
#define Type DHT11

int spin=2;
DHT HT(spin,Type);
float humidity;
float tempC;
float tempF;
int dt=100;
int dt1=100;

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
Serial.begin(9600);
HT.begin();
delay(dt);

lcd.begin(16,20);
}

void loop() {
humidity=HT.readHumidity();
tempC=HT.readTemperature();
tempF=HT.readTemperature(true);

lcd.setCursor(0,0);
lcd.print("Humidity: ");
lcd.print(humidity);
lcd.print("%");

lcd.setCursor(0,1);
lcd.print(tempC);
lcd.print("C ");
lcd.print(": ");
lcd.print(tempF);
lcd.print("F ");

Serial.print("Humidity : ");
Serial.print(humidity);
Serial.print(" Temp : ");
Serial.print(tempC);
Serial.print(" °C : ");
Serial.print(tempF);
Serial.println(" °F ");
delay(dt1);
}
