#include <Arduino.h>
#include <Keyboard.h>

int buttonPin = 9;  // Set a button to any pin

void setup()
{
  pinMode(buttonPin, INPUT);  // Set the button as an input
  digitalWrite(buttonPin, HIGH);  // Pull the button high
}

void loop()
{
  if (digitalRead(buttonPin) == 0)
  {
    Keyboard.write('z');
    delay(1000);
  }
}