#include <notify_android.h>
#define WIFI_SSID "ALSamer_2G"
#define WIFI_PASSWORD "01020304"
#define username "moh1"
#define password "moh"
#define title "android_notify"
#define body "hello android i m arduino"
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
