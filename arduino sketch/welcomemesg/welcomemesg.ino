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
  if (colour=="red","blue","green"){
    if (colour=="red") {
      digitalWrite(red,HIGH);
      digitalWrite(green,LOW);
      digitalWrite(blue,LOW);
    }
    if (colour=="green") {
      digitalWrite(red,LOW);
      digitalWrite(green,HIGH);
      digitalWrite(blue,LOW);
    }
    if (colour=="blue") {
      digitalWrite(red,LOW);
      digitalWrite(green,LOW);
      digitalWrite(blue,HIGH);
    }
    Serial.println(msg2);
  }
  if (colour!="red","blue","green"){
    Serial.println(msg3);
  }
}
