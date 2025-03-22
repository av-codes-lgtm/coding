float potval;
float wt=100;
float freq;
int potpin=A0;
int bpin=11;

void setup() {
  Serial.begin(9600);
  pinMode(bpin,OUTPUT);
  pinMode(potpin,INPUT);
}

void loop() {
  potval=analogRead(potpin);
  Serial.println(potval);
  if(potval>750){
    digitalWrite(bpin,HIGH);
  }
   if(potval<750){ 
    digitalWrite(bpin,LOW);
  }
}
// use a capacitor.
