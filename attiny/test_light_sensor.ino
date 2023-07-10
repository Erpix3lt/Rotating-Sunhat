#define ledPin PB1
#define lightPin A1

void setup(){

}

void loop(){

  int lightReading = analogRead(lightPin);
  int numBlinks = lightReading / 100;
  
  // Blink the LED based on the number of blinks
  for (int i = 0; i < numBlinks; i++) {
    digitalWrite(ledPin, HIGH);    // Turn on the LED
    delay(500);                    // Delay for half a second
    digitalWrite(ledPin, LOW);     // Turn off the LED
    delay(500);                    // Delay for half a second
  }
  
  delay(2000);  // Delay for 2 seconds before the next reading
}
