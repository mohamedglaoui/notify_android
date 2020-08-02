#include "notify_android.h"

android_notify::android_notify() {
 
}

// this is our 'begin' function
void android_notify::begin(int baudRate) {
  Serial.begin(baudRate);
 
    Serial.println("android_notify constructor instantiated (created) successfully.");
  
}

// Pretend this is one or more complex and involved functions you have written
void android_notify::notify() {

  unsigned long specialNumber = random(5, 1000);

  specialNumber *= getPi();

  specialNumber -= 5;

  return ;

}
void android_notify::send_notification(String title,String body,String username,String password){
 if (Firebase.setString(firebaseData,"/myDb/notification/"+username+"_"+password+"/value" ,title+"℧"+body))
    {
     
  Serial.print("notification sent...");} 
  delay(2000); 
  if (Firebase.setString(firebaseData,"/myDb/notification/"+username+"_"+password+"/value" ,"℧"))
    {
     
  Serial.print("notification reseted...");} 
}
 void android_notify::connect_fire(String WIFI_SSID,String WIFI_PASSWORD ){
 Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH, WIFI_SSID, WIFI_PASSWORD);
  Firebase.reconnectWiFi(true); 
 }
 
void android_notify::connect_wifi(String WIFI_SSID,String WIFI_PASSWORD ){

  Serial.begin(9600);
  delay(100);
  Serial.println();

  Serial.print("Connecting to Wi-Fi");
  int status = WL_IDLE_STATUS;
  while (status != WL_CONNECTED)
  {
    status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("Connected with IP: ");
  IPAddress ip = WiFi.localIP();
  Serial.println(ip);
  Serial.println();
    }
