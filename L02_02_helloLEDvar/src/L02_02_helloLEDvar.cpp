/* 
 * Project L02_02_helloLEDvar
 * Author: Kenneth Kinderwater  
 * Date: 6-10-2025
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);


// Show system, cloud connectivity, and application logs over USB
// View logs with CLI using 'particle serial monitor --follow'
SerialLogHandler logHandler(LOG_LEVEL_INFO);


//constants 
const int LEDPIN = D1;
const int LEDDLAY = 6000;
int i;


void setup() {
 pinMode(LEDPIN,OUTPUT);

}

  void loop() {
    digitalWrite(LEDPIN,HIGH);
    delay(LEDDLAY);
    digitalWrite(LEDPIN,LOW);
    delay(LEDDLAY - i);
    i = LEDDLAY + 300; 
  }

