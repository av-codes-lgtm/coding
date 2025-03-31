int b=11;
int r=9;
int a=250;
int d=3;
int c=5;
int j;
void setup() {
pinMode(b,OUTPUT);
pinMode(r,OUTPUT);
}

void loop() {
  for(j=1;j<=d;j=j+1){
digitalWrite(b,HIGH);
delay(a);

digitalWrite(b,LOW);
delay(a);
  }
  for(j=1;j<=c;j=j+1){  
digitalWrite(r,HIGH);
delay(a);

digitalWrite(r,LOW);
delay(a);
  }
}
