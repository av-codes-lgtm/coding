int potval;
int wt=100;

int potpin=A1;
int rled=11;
void setup() {
  pinMode(potpin,INPUT);
  pinMode(rled,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potval=analogRead(potpin);
  Serial.println(potval);
  delay(wt);

  while(potval>1000){
    digitalWrite(rled,HIGH);
    potval=analogRead(potpin);
    Serial.println(potval);
    delay(wt);
  }
  digitalWrite(rled,LOW);
}
