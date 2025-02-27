#include "esp_camera.h"
#include <WiFi.h>

const char* ssid = "Your_SSID";
const char* password = "Your_PASSWORD";

void startCameraServer(); // Function prototype

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("\nWiFi connected");
  startCameraServer(); // Start the camera server
}

void loop() {
  delay(1000); // Keeps the ESP32-CAM running
}
