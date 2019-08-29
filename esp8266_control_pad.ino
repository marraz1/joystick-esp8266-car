// Load Wi-Fi library
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

// Replace with your network credentials
const char* ssid     = "Nelys";
const char* password = "11111111";

// Set web server port number to 80
WiFiServer server(80);

// Variable to store the HTTP request
String header;

// Auxiliar variables to store the current output state
String output5State = "off";
String output4State = "off";

// Assign output variables to GPIO pins
const int inputD4 = 2;
const int inputD5 = 14;
const int inputD6 = 12;
const int inputD7 = 13;
const int inputD8 = 15;



void setup() {
  Serial.begin(115200);
  // Initialize the output variables as outputs
  pinMode(inputD4, INPUT);
  pinMode(inputD5, INPUT);
  pinMode(inputD6, INPUT);
  pinMode(inputD7, INPUT);
  pinMode(inputD8, INPUT);

  // Connect to Wi-Fi network with SSID and password
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Print local IP address and start web server
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();

}

void loop(){
  HTTPClient http;
  //http.begin("http://192.168.43.202/stop"); 
 
  if (digitalRead(inputD4) == HIGH){
     //Serial.print("i prieki ");
     http.begin("http://192.168.43.202/forward"); 
     http.GET();
    //Serial.print("\n");
  }
  if (digitalRead(inputD5) == HIGH){
  //Serial.print("atgal");
  http.begin("http://192.168.43.202/backward");
  http.GET(); 
  //Serial.print("\n");
}

if (digitalRead(inputD6) == HIGH){
  //Serial.print("kaire");
  http.begin("http://192.168.43.202/left");
  http.GET(); 
  //Serial.print("\n");
}

if (digitalRead(inputD7) == HIGH){
  //Serial.print("desine");
  http.begin("http://192.168.43.202/right");
  http.GET(); 
  //Serial.print("\n");
}

if (digitalRead(inputD8) == HIGH){
  //Serial.print("stop");
  http.begin("http://192.168.43.202/stop");
  http.GET(); 
  //Serial.print("\n");
}
}



 
