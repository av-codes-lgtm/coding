int rpin=3;
int gpin=4;
int bpin=5;

int potpin=A2;
float potval;
float dt;
float freq;

void setup() {
  Serial.begin(2000000);
  pinMode(rpin,OUTPUT);
  pinMode(gpin,OUTPUT);
  pinMode(bpin,OUTPUT);
  pinMode(potpin,INPUT);
}

void loop() {
  
  potval=analogRead(potpin);
  freq=potval*(100./1023.)+10;
  (dt)=1000./freq;
  
  Serial.print(freq);
  Serial.print(",");
  Serial.println(dt);
  
  digitalWrite(rpin,HIGH);
  digitalWrite(gpin,HIGH);
  digitalWrite(bpin,HIGH);
  delay(1);
  digitalWrite(rpin,LOW);
  digitalWrite(gpin,LOW);
  digitalWrite(bpin,LOW);
  delay(dt);
}
