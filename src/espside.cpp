//
// Created by Tunay on 16.05.25.
//
#include <Arduino.h>
#include <ESP8266WiFi.h>

const char *ssid = "";
const char *password = "";

WifiServer server = WifiServer(80);

void setup() {
    Serial.begin(9600);
    Wifi.begin(ssid,password);
    if (Wifi.status != WL_CONNECTED) {
        delay(500);
        Serial.println("Connection connect..");
    }
    Serial.print("Connected to Wifi ");
    server.begin();

    // write your initialization code here
}

void loop() {
    // write your code here
}