#ifndef tl
#define tl

#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
#include "Firebase_Arduino_WiFi101.h"
class android_notify  {
  public:
    // Constructor 
     android_notify();

    // Methods
void begin(int baudRate);
void connect_wifi(String WIFI_SSID,String WIFI_PASSWORD );
void connect_fire(String WIFI_SSID,String WIFI_PASSWORD );
void send_notification(String title,String body,String username,String password);
  private:
String FIREBASE_HOST ="travel-536c3.firebaseio.com";
String FIREBASE_AUTH ="GyYzEScnGW2hOkD1QiD0wR5bGULhNdlvZ0cdtoiY";
FirebaseData firebaseData;
};
#endif
