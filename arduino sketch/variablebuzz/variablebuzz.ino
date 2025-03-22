float photoval;
int wt;
int photopin=A5;
int bpin=10;

void setup() {
  Serial.begin(9600);
  pinMode(bpin,OUTPUT);
  pinMode(photopin,INPUT);
}

void loop() {
  photoval=analogRead(photopin);
  wt=(9940./1023.)*photoval+60;
  Serial.println(wt);
  
  digitalWrite(bpin,HIGH);
  delayMicroseconds(wt);
  digitalWrite(bpin,LOW);
  delayMicroseconds(wt);
}
// use a capacitor.
