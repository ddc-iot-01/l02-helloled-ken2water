/* 
 * Project L02_03_helloLEDanalog
 * Author: Kenneth Kinderwater
 * Date: 6-11-2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

const int LEDPIN = D1;
const int LEDDLAY = 5000;


void setup() {
  pinMode(LEDPIN,OUTPUT);
}

void loop() {  // The core of your code will likely live here.
 analogWrite(LEDPIN,255);
  delay(LEDDLAY);
  analogWrite(LEDPIN,0);
  delay(LEDDLAY-4000);
  analogWrite(LEDPIN,63);
  delay(LEDDLAY);
  analogWrite(LEDPIN,0);
  delay(LEDDLAY-4000);
  analogWrite(LEDPIN,171);
  delay(LEDDLAY);
  analogWrite(LEDPIN,0);
  delay(LEDDLAY-4000);
  analogWrite(LEDPIN,16);
  delay(LEDDLAY);
  analogWrite(LEDPIN,0);
  delay(LEDDLAY-4000);
} 


