// left pin is GND
// middle pin is 5V
// right pin is the signal
// right pin to 11
#include <IRremote.h>
int IRpin=11;
IRrecv IR(IRpin);
decode_results cmd;

void setup() {
  Serial.begin(9600);
  IR.enableIRIn();  
}

void loop() {
  while(IR.decode(&cmd)==0){
    
  }
  Serial.println(cmd.value,HEX);
  delay(1500);
  IR.resume();
}
