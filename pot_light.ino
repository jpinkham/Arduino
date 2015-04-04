int ledpin = 10; // Pin D10 has a DIP LED connected

int potpin = 0; //Pin A0 has a potentiometer connected

int potval = 0; // sensor/potentiometer temporary value. Set default value
 
 
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600); // Set baud rate at 9600
  
}
 
// the loop routine runs over and over again forever:
void loop() {
  potval = analogRead(potpin); // Read current value from potentiometer
 
  Serial.println(potval);      // Print vale read from pot
  
  analogWrite(ledpin, (potval / 4 ) ); // Adjust LED brightness based on value read from pot

  delay(10);               // wait for 0.01 second - how long LED stays on at current value
}
