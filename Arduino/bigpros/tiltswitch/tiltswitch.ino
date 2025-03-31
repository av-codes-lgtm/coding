int tiltpin=2;
int tiltval;
int grpin=4;
int redpin=5;

void setup() {
pinMode(tiltpin,INPUT);
pinMode(grpin,OUTPUT);
pinMode(redpin,OUTPUT);
digitalWrite(tiltpin,HIGH);
Serial.begin(9600);
}

void loop() {  
tiltval=digitalRead(tiltpin);
Serial.println(tiltval);
if(tiltval==0){
  digitalWrite(grpin,HIGH);
  digitalWrite(redpin,LOW);
}
else{
  digitalWrite(redpin,HIGH);
  digitalWrite(grpin,LOW);
}
}
