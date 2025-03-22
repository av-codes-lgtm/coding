String colour;
String msg1="What colour do you want? :- ";
String msg2="There you go....";
String msg3="Error 69";

int red=11;
int green=10;
int blue=9;

void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  Serial.println(msg1);
    while(Serial.available()==0){
  }
  colour=Serial.readString();
  if(colour=="white"){
    analogWrite(red,255);
    analogWrite(green,255);
    analogWrite(blue,255);
  }
  if (colour=="red"||colour=="Red"||colour=="RED"||colour=="green"||colour=="Green"||colour=="GREEN"||colour=="blue"||colour=="Blue"||colour=="BLUE"){
    if (colour=="red"||colour=="Red"||colour=="RED") {
      analogWrite(red,255);
      analogWrite(green,0);
      analogWrite(blue,0);
    }
    if (colour=="green"||colour=="Green"||colour=="GREEN") {
      analogWrite(red,0);
      analogWrite(green,255);
      analogWrite(blue,0);
    }
    if (colour=="blue"||colour=="Blue"||colour=="BLUE") {
      analogWrite(red,0);
      analogWrite(green,0);
      analogWrite(blue,255);
    }
    Serial.println(msg2);
  }
}
