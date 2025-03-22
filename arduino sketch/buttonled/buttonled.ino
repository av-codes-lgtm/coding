int rpin=12;
int red=10;
int wt=50;
int rval;

void setup() {
  Serial.begin(9600);
  pinMode(rpin,INPUT);
  pinMode(red,OUTPUT);
}

void loop() {
  rval=digitalRead(rpin);
  Serial.println(rval);
  
  if (rval==1){
    digitalWrite(red,HIGH);
  }
  else{
    digitalWrite(red,LOW);
  }
  
  delay(wt);
}
