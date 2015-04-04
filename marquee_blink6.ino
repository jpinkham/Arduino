int first_led = 8; // first pin used for LED control
int num_leds = 6;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as an output.

  for ( int i = first_led; i < first_led + num_leds; i++ )
  {
    pinMode(i, OUTPUT);
  }
}
 
// the loop routine runs over and over again forever:
void loop() {
  for ( int i = first_led; i < first_led + num_leds; i++ )
  {
    digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
    delay(200);               // wait for 2 seconds - how long LED stays dark
  }

  for ( int i = first_led; i < first_led + num_leds; i++ )
  {
    digitalWrite(i, HIGH);    // turn the LED on by making the voltage HIGH
    delay(200);               // wait for 2 seconds - how long LED stays lit
  }
}
