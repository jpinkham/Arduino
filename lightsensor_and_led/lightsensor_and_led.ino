// Have LED dim/brighten based on input from light sensor
// NOTE: Must use DWM-capable digital pin in order to "fade" the LED
//

const int lightSensor = 2;   // A2 - Analog input
const int blueLED = 5;       // D5 - PWM output

void setup() {
  Serial.begin(9600);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  float rawLightLevel = analogRead(lightSensor);
  Serial.println(rawLightLevel);
 
  // Convert 75-1000 range (of light sensor output) to 0-255 because analogWrite() only allows 0-255
  float lightLevel = map( analogRead(lightSensor),75,1000,0,255); 
  
  // brighten/dim LED equivalent to reading from lightSensor
  analogWrite(blueLED,lightLevel);
  
  
  delay(50);
}
