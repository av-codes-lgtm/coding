int buz1=11;
int a=1;
int b=2;
int j;
void setup() {
  pinMode(buz1,INPUT);
}

void loop() {
for (j=1;j<=100;j=j+1){
  analogWrite(buz1,255);
  delay(a);
  analogWrite(buz1,0);
  delay(a);
}
for (j=1;j<=100;j=j+1){
  analogWrite(buz1,255);
  delay(b);
  analogWrite(buz1,0);
  delay(b);
}
}
