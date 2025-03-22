int red=11;
int blue=10;
int wt=500;

int rednum=3;
int bluenum=5;

int j; 

void setup() {
  pinMode(red,OUTPUT);
  pinMode(red,OUTPUT);

}

void loop() {

  for (j=1;j<=bluenum;j=j+1){
    digitalWrite(blue,HIGH);
    delay(wt);
    digitalWrite(blue,LOW);
    delay(wt);
  }
  for (j=1;j<=rednum;j=j+1){
    digitalWrite(red,HIGH);
    delay(wt);
    digitalWrite(red,LOW);
    delay(wt);
  }
}
