int j;
int wt=250;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(j=10;j>=1;j=j-1){
    Serial.println(j);
    delay(wt);
  }
Serial.println();
}
