#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char auth[] = " cVWmVy230IIODjuarQqMtk-jUABRcUfc";
char ssid[] = "Ktayal";
char pass[] = "1357924680";
void setup() {
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
BLYNK_WRITE(V0)
{
  int lightValue=param.asInt();
  //digitalWrite(4,HIGH);
  if(lightValue>=10)
  {
    digitalWrite(4,HIGH);
  }
  else
  {
    digitalWrite(4,LOW);
  }
}
void loop() {
  Blynk.run();
  // put your main code here, to run repeatedly:
}
