#include <IRremote.h>
int irpin=3;
IRrecv IR(irpin);
decode_results cmd;

void setup() {
  Serial.begin(9600);
  IR.enableIRIn();
}

void loop() {
  while(IR.decode(&cmd)==0){
  }
  Serial.println(cmd.value,HEX);
  
  if (cmd.value==0xA90){
    Serial.println("You pressed ON.");
  }
  if (cmd.value==0x490){
    Serial.println("You pressed +.");
  }
  if (cmd.value==0xC90){
    Serial.println("You pressed -.");
  }
  if (cmd.value==0x290){
    Serial.println("You pressed Volume off.");
  }
  IR.resume(); 
  delay(1500);
  
}
