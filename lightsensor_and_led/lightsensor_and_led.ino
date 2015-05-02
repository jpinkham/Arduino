// Have LED dim/brighten based on input from light sensor
//

const int lightSensor = 5;   // A5
const int blueLED = 1;       // A1

void setup() {
  Serial.begin(9600);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  //float lightLevel = map( analogRead(lightSensor),100,700,0,255); // Convert 100-700 range to 0-100
  float lightLevel = analogRead(lightSensor);
  Serial.println(lightLevel);
  
  // brighten/dim LED
  analogWrite(blueLED,lightLevel);
  
  
  delay(10);
}
