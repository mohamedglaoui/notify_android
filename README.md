# notify_android

Requirement:

-Install "Firebase_Arduino_WiFi101" library from "manage libray" in Arduino IDE.

-Download notify_android library abd add it to the library folder.

-Install the android application from play store "mkr_notify".

########################################################################################################
########################################################################################################

1-go to the android application "mkr_notify"
 a)insert your username and password,you should see "success!!!" as a toast.
 b)click "sign up" 
1-Open the example in your Arduino IDE.

2-
#define WIFI_SSID ""                         ----your wifi's name
#define WIFI_PASSWORD ""                     ----your wifi's password
#define username ""                          -----the username wich was used on the android application
#define password ""                          -----the password wich was used on the android application
#define title""                              -----the title of the notification.
#define body ""                              ----the body of the notification.

3-upload the code into your mkr1000 board

4-return to your android application and click "begin" to be able to see your notification appear on your phone.

5-the "mkr_notify" is a service and is working on the background so you can close the application and you continue receiving the notification.

6-click "stop" to stop receiving the notification if you want that.

7-Note that to restart receiving the notification you must restart the application and it will restart the service automatically.

