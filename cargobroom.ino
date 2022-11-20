#define PWM_A 3
#define PWM_B 11

#define DIR_A 12
#define DIR_B 13

#define BRAKE_A 9
#define BRAKE_B 8

const uint8_t ctrl[] = {PWM_A, PWM_B, DIR_A, DIR_B, BRAKE_A, BRAKE_B};
const byte N = 6;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < N; i++) {
    pinMode(ctrl[i], OUTPUT);
  }

  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(PWM_A, 127);
  analogWrite(PWM_B, 127);


}
