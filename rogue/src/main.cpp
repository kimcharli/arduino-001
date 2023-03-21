// https://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/soft-access-point-class.html
// https://www.espressif.com/sites/default/files/documentation/esp8266_wi-fi_channel_selection_guidelines_en.pdf
#include <WiFi.h>

IPAddress local_IP(192,168,4,22);
IPAddress gateway(192,168,4,9);
IPAddress subnet(255,255,255,0);

const char* ssid     = "test-rogue";
const char* password = "123456789";

void setup() {
  Serial.begin(115200);
  Serial.println();

  Serial.print("Setting soft-AP configuration ... ");
  Serial.println(WiFi.softAPConfig(local_IP, gateway, subnet) ? "Ready" : "Failed!");

  Serial.print("Setting soft-AP ... ");
  Serial.println(WiFi.softAP(ssid, password) ? "Ready" : "Failed!");

  Serial.print("Soft-AP IP address = ");
  Serial.println(WiFi.softAPIP());
}

void loop(){

}

