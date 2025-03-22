int redpin=3;
int n=50;
int m=100;

void setup() {
pinMode(redpin,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
digitalWrite(redpin,HIGH);
delay(n);
digitalWrite(redpin,LOW);
delay(n);

digitalWrite(redpin,HIGH);
delay(n);
digitalWrite(redpin,LOW);
delay(n);

digitalWrite(redpin,HIGH);
delay(n);
digitalWrite(redpin,LOW);
delay(n);

digitalWrite(redpin,HIGH);
delay(m);
digitalWrite(redpin,LOW);
delay(m);

digitalWrite(redpin,HIGH);
delay(m);
digitalWrite(redpin,LOW);
delay(m);

digitalWrite(redpin,HIGH);
delay(m);
digitalWrite(redpin,LOW);
delay(m);

digitalWrite(redpin,HIGH);
delay(n);
digitalWrite(redpin,LOW);
delay(n);

digitalWrite(redpin,HIGH);
delay(n);
digitalWrite(redpin,LOW);
delay(n);

digitalWrite(redpin,HIGH);
delay(n);
digitalWrite(redpin,LOW);
delay(1000);

}


