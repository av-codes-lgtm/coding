int num;
String msg1="How many blinks? : ";
String msg2="with what time interval? :";
String msg3="There you go... ";
String msg4=" blinks.";

int j;

int led=11;
int wt=50;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  Serial.println(msg1);
    while(Serial.available()==0){
  }
  num=Serial.parseInt();
  j=1;
  while(j<=num){
    digitalWrite(led,HIGH);
    delay(wt);
    digitalWrite(led,LOW);
    delay(wt);
    j=j+1;
  }
  
  Serial.print(msg3);
  Serial.print(num);
  Serial.println(msg4);
}
