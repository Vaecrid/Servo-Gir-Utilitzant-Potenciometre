#include <Servo.h>
 
Servo servo1;
 
int const potPin = A1;    
// Utilitzarem A1 per conectar el potenciometre
int potVal;
int angle;

void setup() {
  
   servo1.attach(2);  
   // vincular el servo al pin 2
   Serial.begin(9600);
}
 
void loop() {
  
  potVal = analogRead(potPin);
  //Llegir el valor del potenciometre
  Serial.print("potVal: ");
  Serial.print(potVal);
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(", angle:");
  Serial.println(angle);
  servo1.write(angle);
  delay(15);
  //Espera 15 milisegons
}
