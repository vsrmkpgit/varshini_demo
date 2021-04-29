
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "gp49wD76Dj35Gp9-gGydAYHQ3TqIfyi3";
char ssid[] = "VSRMKP TECH";
char pass[] = "vsrm@123";

void setup()
{ 
  Serial.begin(115200);
  Serial.println("Interfacfing arduino with Esp32");
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
   
    float a = analogRead(33);
   float b = ((a*3.3)/4095)+0.15;
    Serial.print("Voltage:");
    Serial.println(b);
    delay(200);
    Blynk.run();
    Blynk.virtualWrite(V25, b);
    delay(200);
}
