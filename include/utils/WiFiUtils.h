#pragma once

#include "Global.h"
#include "MqttClient.h"

// boolean isNetworkActive();
inline boolean isNetworkActive() {return WiFi.status() == WL_CONNECTED;};
void routerConnect();
bool startAPMode();
boolean RouterFind(JsonArray jArray);
uint8_t RSSIquality();
extern void wifiSignalInit();
