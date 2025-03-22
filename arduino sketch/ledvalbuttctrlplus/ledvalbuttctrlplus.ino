int rpin1=12;
int red1=10;
int rpin2=8;
int change=5;

int bnew1;
int bold1=0;
int bnew2;
int bold2=0;
int ledval=0;

int wt=50;
int rval;

void setup() {
  Serial.begin(9600);
  pinMode(rpin1,INPUT);
  pinMode(red1,OUTPUT);
  pinMode(rpin2,INPUT);
}

void loop() {
  bnew1=digitalRead(rpin1);
  bnew2=digitalRead(rpin2);
  Serial.print(bnew1*100);
  Serial.print(",");
  Serial.print(bnew2*100);
  Serial.print(",");
  Serial.println(ledval);
  if (ledval>255){
    ledval=ledval-255;
  }
  if (ledval<0){
    ledval=ledval+255;
  }
  
  if (bold1==1){
    ledval=ledval+change;
  }
  if (bold2==1){
    ledval=ledval-change;
  }
  analogWrite(red1,ledval);
  bold1=bnew1;
  bold2=bnew2;
  delay(wt);
}

