int out=11;
int in=A2;
float pot;
float out1;
int a=100;
void setup() {
  pinMode(out,OUTPUT);
  pinMode(in,INPUT);
  Serial.begin(9600);
}

void loop() {
pot=analogRead(in);
out1=(255./1023.)*pot;
analogWrite(out,out1);
Serial.println(out1);
}
