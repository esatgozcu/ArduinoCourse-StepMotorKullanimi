#include <X113647Stepper.h>

static const int STEPS_PER_REVOLUTION = 1000; 

X113647Stepper myStepper(STEPS_PER_REVOLUTION, 8, 9, 10, 11);

void setup() {
  
  myStepper.setSpeed(10);
}

void loop() {
  
  myStepper.step(STEPS_PER_REVOLUTION);
  delay(500);

  myStepper.step(-STEPS_PER_REVOLUTION);
  delay(500);
}

