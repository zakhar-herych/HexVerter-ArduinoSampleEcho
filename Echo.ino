/*
Created by Zakhar Herych as part of Independent Study, July 2014

Sample code for testing the communication between PC and Arduino

*/


void setup() {
  // Prior to starting the test make sure that switch on Xbee shield
  // is in the UART mode - that means that we are interfacing XBee
  // within hardware serial
  Serial.begin(9600);
}

void loop()
{
  // If there is any data sent from PC
  if (Serial.available()) {
    // Send it back to the PC
    Serial.write(Serial.read());
  }
}

