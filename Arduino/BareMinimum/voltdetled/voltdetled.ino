int in=A4;
float rv;
float V2;
float a=1;
int r=12;
int b=10;
int g=8;
float th1=3.00;
float th2=4.00;
float th3=5.00;
void setup() {
  Serial.begin(9600);
  pinMode(in,INPUT);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT); 
}

void loop() {
  rv=analogRead(in);
  V2=(5./1023.)*rv;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);
  
  if (V2<th1){
      digitalWrite(g,HIGH);
      digitalWrite(r,LOW);
      digitalWrite(b,LOW);
  }
  if (V2>th1 && V2<th2){
    digitalWrite(b,HIGH);
    digitalWrite(g,LOW);
    digitalWrite(r,LOW);
  }
  if (V2>th2 && V2<th3){
    digitalWrite(r,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(g,LOW);
  }
  delay(a);
}
