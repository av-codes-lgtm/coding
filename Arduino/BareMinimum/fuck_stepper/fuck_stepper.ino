#include <Stepper.h>
int spr=2048;
float mspd=6;

Stepper mstpr(spr,8,9,10,11);

void setup() {
Serial.begin(9600);
mstpr.setSpeed(mspd);
}

void loop() {
mstpr.step(spr);
}
