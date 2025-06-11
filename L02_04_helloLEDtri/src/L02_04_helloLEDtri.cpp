/* 
 * Project L02_04_helloLEDtri
 * Author: Kenneth Kinderwater
 * Date: 6-11-2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);

const int LEDPIN1 = D1; 
const int LEDPIN2 = D13;
int j; 
void setup() {
pinMode(LEDPIN1,OUTPUT);
pinMode(LEDPIN2,OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  for(j = 0; j<= 255; j++){
    analogWrite(LEDPIN1,j);
    analogWrite(LEDPIN2,255-j); //easy inverse of output with different LED  
    delay(20);
}

for(j = 255; j >=0; j--){
  analogWrite(LEDPIN1,j);
  analogWrite(LEDPIN2,255-j);
  delay(20);

}
}

