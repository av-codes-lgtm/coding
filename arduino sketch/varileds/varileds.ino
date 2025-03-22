int potpin=A2;
int rval;
float V2;
int wt=50;

int red=11;
int lal;

void setup() {
pinMode(potpin,INPUT);
pinMode(red,OUTPUT);
Serial.begin(9600);

}

void loop() {
rval=analogRead(potpin);
V2=(5./1023.)*rval;
Serial.println(V2);
lal=(255./1023.)*rval;
analogWrite(red,lal);
delay(wt);
}
