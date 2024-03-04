#include <Servo.h>

// Define the pin for the rain sensor
const int rainSensorPin = A0;

// Define the pin for the servo motor
const int servoPin = 9;

// Create a servo object
Servo servoMotor;

void setup() {
  // Initialize the servo motor
  servoMotor.attach(servoPin);

  // Set the rain sensor pin as an input
  pinMode(rainSensorPin, INPUT);
}

void loop() {
  // Read the value from the rain sensor
  int rainSensorValue = analogRead(rainSensorPin);

  // Check if water is detected
  if (rainSensorValue > 500) {
    // Turn the servo motor to 180 degrees
    servoMotor.write(180);
  } else {
    // Turn the servo motor to 0 degrees
    servoMotor.write(0);
  }

  // Wait for a short time before reading the rain sensor again
  delay(100);
}
