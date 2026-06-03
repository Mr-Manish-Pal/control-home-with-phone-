#define BLYNK_TEMPLATE_ID "TMPL3_72gv***"
#define BLYNK_TEMPLATE_NAME "led moniter"
#define BLYNK_AUTH_TOKEN "ORnL8dMP***********************"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Manish";
char pass[] = "11111111";

#define RELAY_PIN 13

BLYNK_WRITE(V0)
{
  int value = param.asInt();

  Serial.print("V0 = ");
  Serial.println(value);

  if (value == 1)
  {
    digitalWrite(RELAY_PIN, LOW);   // Active LOW relay
    Serial.println("Relay ON");
  }
  else
  {
    digitalWrite(RELAY_PIN, HIGH);
    Serial.println("Relay OFF");
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);

  Serial.println("Connecting to WiFi...");
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Connected!");
}

void loop()
{
  Blynk.run();
}