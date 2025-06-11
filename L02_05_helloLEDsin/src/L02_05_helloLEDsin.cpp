/* 
 * Project L02_05_helloLEDsin 
 * Author: Kenneth Kinderwater
 * Date: 6-11-25
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"
#include "math.h"

const int LEDPIN = D1;
float BRIGHTNESS;
float t;
const int a = 255/2;
const int b = 255/2;

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);


void setup() {
  // Put initialization like pinMode and begin functions here
  pinMode(LEDPIN,OUTPUT);
  
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  t=millis()/1000.0; //
  BRIGHTNESS= a* sin(2*M_PI*(1.0/5.0)*t)+b;
  analogWrite(LEDPIN,BRIGHTNESS);

  // The core of your code will likely live here.

  // Example: Publish event to cloud every 10 seconds. Uncomment the next 3 lines to try it!
  // Log.info("Sending Hello World to the cloud!");
  // Particle.publish("Hello world!");
  // delay( 10 * 1000 ); // milliseconds and blocking - see docs for more info!
}
