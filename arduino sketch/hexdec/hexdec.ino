int lpin=11;
int cpin=9;
int dpin=12;

byte led=0x01;

int dt=50;

void setup() {
  Serial.begin(9600);
  pinMode(lpin,OUTPUT);
  pinMode(dpin,OUTPUT);
  pinMode(cpin,OUTPUT);
}

void loop() {
  digitalWrite(lpin,LOW);
  shiftOut(dpin,cpin,LSBFIRST,led);
  Serial.println(led,HEX);
  led=(led)*2;
  if (led==128){
    led=0x01;
  }

  digitalWrite(lpin,HIGH);

  delay(dt);

}
