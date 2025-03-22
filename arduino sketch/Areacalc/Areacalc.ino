String msg1="Radius?(in cm) : ";
String msg2="Area = ";
String msg3="cm";

float rad;
float pi=3.1415;
float area;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(msg1);
    while(Serial.available()==0){
  }
  rad=Serial.parseFloat();
  area=(pi*rad*rad);
  
  Serial.print(msg2);
  Serial.print(area);
  Serial.println(msg3);
}
