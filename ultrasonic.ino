
// Connect trig pin on HC-SR04 to pin 9
#define trig 9
// Echo pin on HC-SR04 to pin 10
#define echo 10


uint32_t duration;
uint32_t distance;

const double k = 0.034 / 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance = duration * k;
}
