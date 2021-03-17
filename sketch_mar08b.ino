#include<CayenneMQTTESP8266.h>
#define CAYENNE_DUBUG
#define CAYENNE_PRINT Serial

char ssid[] = "Wifi name";
char password[] = "wifi password";

char username[] = "your mqtt username";
char mqtt_pass[] = "mqtt password";
char client_id[] = "your cliend id";
int relay = D1; where the bulb is connected
void setup() {
  Cayenne.begin(username, mqtt_pass, client_id, ssid, password);
  pinMode(relay, OUTPUT);
  digitalWrite(relay, LOW);
}
void loop() {
Cayenne.loop();
}
//function to turn on and off the light from cayenne dashboard
CAYENNE_IN(0){
  digitalWrite(relay, !getValue.asInt());
  }
