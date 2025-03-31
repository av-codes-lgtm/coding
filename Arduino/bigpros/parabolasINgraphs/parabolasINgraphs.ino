float sinv;
float cosv;
float j;
float prab;
float prab2;

void setup() {
Serial.begin(9600);
}

void loop() {
for(j=-4;j<=4;j=j+0.01){
  prab=j*j;
  sinv=sin(j);
  prab2=prab*sinv;
  Serial.print(prab);
  Serial.print(",");
  Serial.println(prab2);
}
}
