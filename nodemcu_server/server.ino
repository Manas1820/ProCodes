#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

/* Put your SSID & Password */
const char* ssid = "NodeMCU";  // Enter SSID here
const char* password = "12345678";  //Enter Password here

/* Put IP Address details */
IPAddress local_ip(192,168,2,1);
IPAddress gateway(192,168,2,1);
IPAddress subnet(255,255,255,0);

ESP8266WebServer server(80);

bool r[8] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
uint8_t rly[8] = {D1,D2,D3,D4,D6,D6,D7,D8};

void setup() {
  Serial.begin(9600);
  for(int i=0;i<8;i++)
    pinMode(rly[i], OUTPUT);

  WiFi.softAP(ssid, password);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);

  server.on("/relay",trying);
  server.on("/", handle_OnConnect);
  server.onNotFound(handle_NotFound);

  server.begin();
  Serial.println("HTTP server started");
}
void loop() {
  server.handleClient();
  for(int i=0;i<8;i++){
    if(r[i])
      digitalWrite(rly[i], HIGH);
    else
      digitalWrite(rly[i], LOW);
  }
}

void handle_OnConnect() {
  server.send(200, "text/html", SendHTML()); 
}

void trying(){
  int ans = server.arg("switches").toInt();
  r[ans-1]=!r[ans-1];
  if(r[ans-1])
  server.send(200, "text/html", "yes");
  else
  server.send(200, "text/html", "no");
}


void handle_NotFound(){
  server.send(404, "text/plain", "Not found");
}

String SendHTML(){
  String ptr = "<!DOCTYPE html>";
ptr += "<html lang='en'>";
ptr += "<head>";
ptr +=     "<meta charset='UTF-8'>";
ptr +=     "<meta http-equiv='X-UA-Compatible' content='IE=edge'>";
ptr +=     "<meta name='viewport' content='width=device-width, initial-scale=1.0'>";
ptr +=     "<title>Home</title>";
ptr += "</head>";
ptr += "<body>";
ptr +=     "<form action='/relay' method='GET'>";
ptr +=         "<label for='switches'>Select switch:</label>";
ptr +=         "<select name='switches' id='switches'>";
ptr +=             "<option value=1>switch 1</option>";
ptr +=             "<option value=2>switch 2</option>";
ptr +=             "<option value=3>switch 3</option>";
ptr +=             "<option value=4>switch 4</option>";
ptr +=             "<option value=5>switch 5</option>";
ptr +=             "<option value=6>switch 6</option>";
ptr +=             "<option value=7>switch 7</option>";
ptr +=             "<option value=8>switch 8</option>";
ptr +=         "</select><br>";
ptr +=         "<br><input type='submit' value='submit'>";
ptr +=     "</form>";
ptr += "</body>";
ptr += "</html>";
  return ptr;
}
