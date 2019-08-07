
#define uS_TO_S_FACTOR 1000000  /* Conversion factor for micro seconds to seconds */
#define TIME_TO_SLEEP  10       /* Time ESP32 will go to sleep (in seconds) */
 
void setup() {
  Serial.begin(115200);
  Serial.println("I'm awake, but I'm going into deep sleep mode for 10 seconds");
  /* Deep sleep mode will be activated for TIME_TO_SLEEP seconds then wake up and repeat the setup function */
  ESP.deepSleep(TIME_TO_SLEEP*uS_TO_S_FACTOR);
}

void loop() {}
