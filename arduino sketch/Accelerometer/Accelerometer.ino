#define M1_A 4
#define M1_B 5
#define M2_A 6
#define M2_B 7

const int xPin = A1;
const int yPin = A2;
const int zPin = A3;
int j;
int k;
int l;

void setup() {
  Serial.begin(9600);
  
  pinMode(M1_A,OUTPUT);
  pinMode(M1_B,OUTPUT);
  pinMode(M1_A,OUTPUT);
  pinMode(M1_B,OUTPUT);

  pinMode(13,OUTPUT);

  for(int i=0; i<5; i++){
    int xVal = analogRead(xPin);
    j+=xVal;
  }

  j/=5;
}

void loop() {
  int xVal = analogRead(xPin);
  int yVal = analogRead(yPin);
  int zVal = analogRead(zPin);

  Serial.print("X: ");
  Serial.print(xVal);
  Serial.print(",");
  Serial.print(" Y: ");
  Serial.print(yVal);
  Serial.print(",");
  Serial.print(" Z: ");
  Serial.println(zVal);
  delay(2500);

  if (xVal<(j-30)){

    digitalWrite(13,HIGH);

    digitalWrite(M1_A,LOW);
    digitalWrite(M1_B,HIGH);
    digitalWrite(M2_A,LOW);
    digitalWrite(M2_B,HIGH);

  }
  else if (xVal>(j+30)){

    digitalWrite(13,HIGH);

    digitalWrite(M1_A,HIGH);
    digitalWrite(M1_B,LOW);
    digitalWrite(M2_A,HIGH);
    digitalWrite(M2_B,LOW);  
    
  } else if (yVal>450){

    digitalWrite(13,HIGH);

    digitalWrite(M2_A,HIGH);
    digitalWrite(M2_B,LOW); 
    
  } else if (yVal<330){

    digitalWrite(13,HIGH);

    digitalWrite(M1_A,HIGH);
    digitalWrite(M1_B,LOW);
    
  } else {
    digitalWrite(13,LOW);

    digitalWrite(M1_A,LOW);
    digitalWrite(M1_B,LOW);
    digitalWrite(M2_A,LOW);
    digitalWrite(M2_B,LOW);
  }
} 

