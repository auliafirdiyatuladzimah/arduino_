//the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 7 as an outoput
  pinMode(7, OUTPUT);
}

//the loop function runs over and over again forever 
void loop() {
  digitalWrite(7, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(4000);               // wait for a second 
  digitalWrite(7, LOW);  //turn the LED off by making the voltage Low 
  delay(4000);               // wait for a second 
}
