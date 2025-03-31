int r=9;
int bzp=4;
int bp1=12;
int bp2=11;
int bn1;
int bn2;
int bo1=1;
int bo2=1;
int lb=0;
void setup() {
Serial.begin(9600);
pinMode(r,OUTPUT);
pinMode(bzp,OUTPUT);
pinMode(bp1,INPUT);
pinMode(bp2,INPUT);
Serial.begin(9600);
}

void loop() {
bn1=digitalRead(bp1);
bn2=digitalRead(bp2);
Serial.print("B1 = ");
Serial.print(bn1);
Serial.print(" , ");
Serial.print("B2 = ");
Serial.println(bn2);
if (bn1==0){
  lb=lb+1;
}
if (bn2==0){
  lb=lb-1;
}
if (lb>255){
  lb=255;
  digitalWrite(bzp,HIGH);
}
if (lb<0){
  lb=0;
}
if (lb!=255){
  digitalWrite(bzp,LOW);
}
analogWrite(r,lb);
}
