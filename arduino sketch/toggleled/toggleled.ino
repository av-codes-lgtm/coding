int rpin=12;
int red=10;
int ledstat=0;
int bnew;
int bold=0;

int wt=50;
int rval;

void setup() {
  Serial.begin(9600);
  pinMode(rpin,INPUT);
  pinMode(red,OUTPUT);
}

void loop() {
  bnew=digitalRead(rpin);
  Serial.println(bnew);

  if (bold==1 && bnew==0){
    if (ledstat==1){
      digitalWrite(red,HIGH);
      ledstat=0;
    }
    else {
      digitalWrite(red,LOW);
      ledstat=1;    
    }
  }
  bold=bnew;
  delay(wt);
}

