#define M1_A 4
#define M1_B 5
#define M2_A 6
#define M2_B 7

void setup() {
  Serial.begin(9600);
  pinMode(M1_A,OUTPUT);
  pinMode(M1_B,OUTPUT);
  pinMode(M1_A,OUTPUT);
  pinMode(M1_B,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    char command=Serial.read();

    switch (command){
      case 'S':
      digitalWrite(M1_A,HIGH);
      digitalWrite(M1_B,LOW);
      digitalWrite(M2_A,HIGH);
      digitalWrite(M2_B,LOW);
      break;

      case 'W':
      digitalWrite(M1_A,LOW);
      digitalWrite(M1_B,HIGH);
      digitalWrite(M2_A,LOW);
      digitalWrite(M2_B,HIGH);
      break;

      case 'A':
      digitalWrite(M1_A,HIGH);
      digitalWrite(M1_B,LOW);
      digitalWrite(M2_A,LOW);
      digitalWrite(M2_B,HIGH);
      break;

      case 'D':
      digitalWrite(M1_A,LOW);
      digitalWrite(M1_B,HIGH);
      digitalWrite(M2_A,HIGH);
      digitalWrite(M2_B,LOW);
      break;

      case ' ':
      digitalWrite(M1_A,LOW);
      digitalWrite(M1_B,LOW);
      digitalWrite(M2_A,LOW);
      digitalWrite(M2_B,LOW);

      default:
      break;
    }
  }
}
