#define BLYNK_TEMPLATE_ID "TMPL3Rg2HAPJ3"
#define BLYNK_TEMPLATE_NAME "Fire Alarm"
#define BLYNK_AUTH_TOKEN "mFhA9vDue6H0Lb2MnEiTDqxhkPMTavrP"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Sujata's Galaxy A14 5G";
char pass[] = "sanavi0110";

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
  if (Serial.available()) {
    String status = Serial.readStringUntil('\n');
    status.trim();
    if (status == "FIRE") {
      Blynk.logEvent("fire_alert", "Fire Detected! Check immediately!");
      Blynk.virtualWrite(V1, 1);
    } else {
      Blynk.virtualWrite(V1, 0);
    }
  }
}
