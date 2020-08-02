#include <notify_android.h>
#define WIFI_SSID ""
#define WIFI_PASSWORD ""
#define username ""
#define password ""
#define title ""
#define body ""
android_notify notifyme(true);

void setup() {
  // put your setup code here, to run once:

 notifyme.begin(9600);
  
 notifyme.connect_wifi(WIFI_SSID,WIFI_PASSWORD );
 notifyme.connect_fire(WIFI_SSID,WIFI_PASSWORD );
 notifyme.send_notification(title,body,username,password);
}

void loop() {

  delay(2000);
}
