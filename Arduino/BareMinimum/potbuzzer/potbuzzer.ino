int out=11;
int in=A2;
float pot;
int a=100;
void setup() {
  pinMode(out,OUTPUT);
  pinMode(in,INPUT);
  Serial.begin(9600);
}

void loop() {
pot=analogRead(in);
Serial.println(pot);
while(pot>1000){
  digitalWrite(out,HIGH);
  pot=analogRead(in);
}
digitalWrite(out,LOW);
}
