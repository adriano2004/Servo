#include <Servo.h>

Servo servo;
int pot;

void setup() {
  servo.attach(7);
  Serial.begin(9600);
  
}

void loop() {
  
  pot = analogRead(A0);
  pot = map(pot, 0, 1024, 0, 180);
  servo.write(pot);
  Serial.println(pot);
}
