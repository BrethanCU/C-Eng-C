#include <Servo.h>

Servo rClaw;
Servo lClaw;

void setup() {
  // put your setup code here, to run once:
  rClaw.attach(9);
  lClaw.attach(10);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 180; i++) {
    rClaw.write(i);
    lClaw.write(180 - i);
    delay(50);
  }

  delay(1000);

  for (int i = 180; i <= 0; i--) {
    rClaw.write(i);
    lClaw.write(180 - i);
    delay(50);
  }
}
