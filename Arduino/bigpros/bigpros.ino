int r=8;
int bp=12;
int br;
void setup() {
Serial.begin(9600);
pinMode(r,OUTPUT);
pinMode(bp,INPUT);
}

void loop() {
br=digitalRead(bp);
Serial.println(br);
if (br==0){
  digitalWrite(r,HIGH);
}
if (br==1){
  digitalWrite(r,LOW);
}
}
