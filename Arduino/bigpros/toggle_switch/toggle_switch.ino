int lstat=0;
int bp=4;
int bn;
int bo=1;
int a=100;
void setup() {
Serial.begin(9600);
pinMode(bp,INPUT);
}

void loop() {
bn=digitalRead(bp);
if (bo==0 && bn==1){
  if (lstat==0){
    lstat=1;
  }
  else{
    lstat=0;
  }
}
Serial.println(lstat);
bo=bn;
delay(a);
}
