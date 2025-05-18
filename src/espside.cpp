#include <Arduino.h>
#include <ESP8266WiFi.h>


const char* ssid = "";
const char* password = "";

void setup() {
    Serial.begin(115200);
    delay(1000);
    Serial.println("Connecting to WiFi...");

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

void loop() {
}