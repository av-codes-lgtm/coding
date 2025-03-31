int a=750;
float pi=3.14;
float r=1;
float area;
String s="A circle with radius ";
String t="cm has an area of ";
void setup() {
Serial.begin(115200);
}

void loop() {
area=pi*r*r;
Serial.print(s);
Serial.print(r);
Serial.print(t);
Serial.print(area);
Serial.println("cm.");
delay(a);
r=r+0.5;
}
