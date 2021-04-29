#include <analogWrite.h>
const int pin = 32;
void setup() 
{
    Serial.begin(115200);
}

void loop() 
{
   float a = analogRead(25);
   float b = ((a*5*3.3)/4095)+0.6;
   Serial.print("Voltage:");
   Serial.println(b);
   if (a >= 760)
   {                   
   analogWrite(pin, 0);
   }
   else
   {
   analogWrite(pin, 190);
   }
   delay(500);
}
