#include <Servo.h>
// Define pin constants for car motion
#define DIR_A 12
#define DIR_B 13
#define PWM_A 3
#define PWM_B 11


// Define pin constants for servo actions
#define R 6
#define L 5
#define TILT 8

// Define pin constants for I2C colour sensors
#define SDA A4
#define SCL A5

// Define pin constants for distance sensor
#define ECHO 10
#define TRIG 9

// Constant for calculating distances
const double k = 0.034 / 2;

double getDistance();

Servo rClaw;
Servo lClaw;
Servo tilt;

void setup() {
  // put your setup code here, to run once:
  rClaw.attach(R);
  lClaw.attach(L);
  tilt.attach(TILT);

  pinMode(PWM_A, OUTPUT);
  for (int i = PWM_B; i <= DIR_B; i++) {
    pinMode(i, OUTPUT);
  }


  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, HIGH);
}

bool first = true;
uint8_t knowns = 0;
void loop() {

  analogWrite(PWM_A, 127);
  analogWrite(PWM_B, 127);
  
}

double getDistance() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  return pulseIn(ECHO, HIGH) * k;
}



