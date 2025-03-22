int lpin=11;
int cpin=9;
int dpin=12;

byte led=0x01;
byte lasled2=128;

int dt=100;

void setup() {
  Serial.begin(9600);
  pinMode(lpin,OUTPUT);
  pinMode(dpin,OUTPUT);
  pinMode(cpin,OUTPUT);
}

void loop() {
  digitalWrite(lpin,LOW);
  
  shiftOut(dpin,cpin,LSBFIRST,led);
  Serial.println(led,BIN);
  led=(led)+1;
 
  digitalWrite(lpin,HIGH);

  delay(dt);

}
