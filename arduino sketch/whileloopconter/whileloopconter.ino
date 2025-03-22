int j;
int wt=500;
void setup() {
  Serial.begin(9600);
}

void loop() {
  j=1;
  while(j<=10){
    Serial.println(j);
    delay(wt);
    j=j+1;
  }
  Serial.println();
}
