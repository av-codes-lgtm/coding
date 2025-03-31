int myn;
int buz=11;
int a=1000;
String msg="Put your number in!";
void setup() {
  Serial.begin(9600);
  pinMode(buz,OUTPUT);
}

void loop() {
Serial.println(msg);
while (Serial.available()==0){
  
}
myn=Serial.parseInt();
if (myn>10){
  digitalWrite(buz,HIGH);
  delay(a);
  digitalWrite(buz,LOW);
}
}
