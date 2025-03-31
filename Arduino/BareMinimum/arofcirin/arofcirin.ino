float r;
String msg="What is the radius of your circle : ";
float ar;
float pi=3.14;
String msg2="Area of the circle is : ";
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println(msg);
while (Serial.available()==0){
  
}
r=Serial.parseFloat();
ar=pi*r*r;
Serial.print(msg2);
Serial.println(ar);
}
