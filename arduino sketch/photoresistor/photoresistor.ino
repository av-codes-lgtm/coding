int varpin=A5;
int varval;

int red=10;
int green=9;
int wt=250;
void setup() {
  Serial.begin(9600);
  pinMode(varpin,INPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  varval=analogRead(varpin);
  Serial.println(varval);
  if (varval<150){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
  }
  if (varval>150){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
  }
  delay(wt);
}
