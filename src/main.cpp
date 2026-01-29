#include <Arduino.h>
#include <WiFi.h>

#define LED_PIN 48   // ESP32-S3 RGB LED pin (most boards)

const char* ssid = "ESP32-S3-AP";
const char* password = "12345678";

void setup() {
  pinMode(LED_PIN, OUTPUT);

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  Serial.begin(115200);
  delay(1000);

  Serial.println("ESP32-S3 Started");
  Serial.print("AP IP: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
