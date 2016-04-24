//*****************************************************************************
// SMOKER PROJECT
//  Developer: Duncan Lowder
//  Date:      04-24-2016
//*****************************************************************************

//=============================================================================
// GLOBAL VARIABLES
//=============================================================================

long counter = 0;

//-----------------------------------------------------------------------------
// setup
//  Description: This function performs all of the initialization needed for
//               the uC to run correctly. This is called when the processor
//               first powers up.
//  Parameters:  None
//  Return:      None
//-----------------------------------------------------------------------------
void setup() {
  // Initialize serial port for debug
  Serial.begin(9600);

  // Set D7 as an output
  pinMode(D7, OUTPUT);

  // Counter variable
  Spark.variable("counter", &counter, INT);
}

//-----------------------------------------------------------------------------
// loop
//  Description: Main loop for the program. This is called every 10-15ms by
//               the particle API. All WiFi and background related tasks are
//               handled by the SPARK core firmware.
//  Parameters:  None
//  Return:      None
//-----------------------------------------------------------------------------
void loop() {
  digitalWrite(D7, HIGH);
  delay(500);
  digitalWrite(D7, LOW);
  delay(500);

  Serial.println(counter++);
}
