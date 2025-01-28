#include <WiFiNINA.h>

#include "secrets.h"

#include "config.h"



const byte VDT_LOGO[] PROGMEM = 
{  
  0x0e, 0x1b, 0x5b, 0x31, 0x3b, 0x34, 0x48, 0x1b, 0x5b, 0x31, 0x3b, 0x34, 0x48, 0x20, 0x5f, 0x2f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2a, 0x65, 0x30, 0x20, 0x20, 0x1b, 0x5b, 0x32, 0x3b, 0x34, 0x48, 0x7c, 0x5f, 0x7c, 0x5f, 0x7c, 0x20, 0x20, 0x20, 0x7c, 0x23, 0x23, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x68, 0x34, 0x22, 0x69, 0x34, 0x20, 0x1b, 0x5b, 0x33, 0x3b, 0x34, 0x48, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x68, 0x7c, 0x7c, 0x7c, 0x34, 0x20, 0x20, 0x20, 0x20, 0x68, 0x7c, 0x7c, 0x7c, 0x34, 0x20, 0x20, 0x60, 0x30, 0x2a, 0x65, 0x30, 0x6a, 0x35, 0x1b, 0x5b, 0x34, 0x3b, 0x34, 0x48, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x5f, 0x20, 0x60, 0x3a, 0x25, 0x20, 0x20, 0x20, 0x2a, 0x65, 0x30, 0x60, 0x3a, 0x25, 0x20, 0x70, 0x20, 0x2a, 0x65, 0x30, 0x22, 0x69, 0x34, 0x6a, 0x35, 0x6a, 0x35, 0x1b, 0x5b, 0x35, 0x3b, 0x34, 0x48, 0x23, 0x7c, 0x20, 0x7c, 0x23, 0x20, 0x20, 0x5f, 0x20, 0x6a, 0x35, 0x20, 0x7c, 0x7c, 0x7c, 0x20, 0x6a, 0x7d, 0x7e, 0x35, 0x20, 0x7c, 0x5f, 0x7c, 0x20, 0x6a, 0x35, 0x20, 0x6a, 0x35, 0x6a, 0x35, 0x6a, 0x35, 0x1b, 0x5b, 0x36, 0x3b, 0x34, 0x48, 0x20, 0x2f, 0x70, 0x2f, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x2a, 0x65, 0x30, 0x20, 0x20, 0x20, 0x60, 0x3a, 0x25, 0x2a, 0x65, 0x30, 0x20, 0x2f, 0x20, 0x60, 0x3a, 0x25, 0x20, 0x6a, 0x35, 0x6a, 0x35, 0x6a, 0x35, 0x1b, 0x5b, 0x37, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x22, 0x69, 0x7c, 0x7c, 0x7c, 0x36, 0x21, 0x20, 0x20, 0x22, 0x69, 0x7c, 0x7c, 0x7c, 0x36, 0x21, 0x20, 0x2a, 0x25, 0x60, 0x3a, 0x25, 0x6a, 0x35, 0x1b, 0x5b, 0x38, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x2f, 0x70, 0x20, 0x20, 0x70, 0x2f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x68, 0x36, 0x21, 0x68, 0x36, 0x21, 0x1b, 0x5b, 0x39, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x20, 0x23, 0x7c, 0x7c, 0x23, 0x20, 0x20, 0x70, 0x30, 0x60, 0x60, 0x20, 0x70, 0x6a, 0x20, 0x30, 0x20, 0x30, 0x62, 0x60, 0x60, 0x30, 0x20, 0x60, 0x70, 0x20, 0x20, 0x60, 0x3a, 0x25, 0x20, 0x20, 0x1b, 0x5b, 0x31, 0x30, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x22, 0x70, 0x7a, 0x6a, 0x21, 0x6a, 0x20, 0x6b, 0x20, 0x35, 0x20, 0x35, 0x6a, 0x6a, 0x21, 0x6a, 0x20, 0x35, 0x20, 0x35, 0x20, 0x22, 0x21, 0x20, 0x20, 0x20, 0x1b, 0x5b, 0x31, 0x31, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2a, 0x70, 0x6e, 0x6a, 0x20, 0x2a, 0x70, 0x6e, 0x20, 0x65, 0x38, 0x35, 0x6a, 0x6a, 0x20, 0x6a, 0x20, 0x65, 0x70, 0x25, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x5b, 0x31, 0x32, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x5b, 0x31, 0x33, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x60, 0x70, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x70, 0x20, 0x20, 0x30, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x5b, 0x31, 0x34, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x2c, 0x30, 0x20, 0x23, 0x23, 0x20, 0x28, 0x2c, 0x3c, 0x24, 0x20, 0x35, 0x35, 0x60, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x5b, 0x31, 0x35, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x23, 0x29, 0x2c, 0x22, 0x23, 0x23, 0x21, 0x60, 0x3a, 0x20, 0x20, 0x2e, 0x20, 0x2d, 0x21, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x5b, 0x31, 0x36, 0x3b, 0x34, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0f 
};

const byte VDT_PAGE[] PROGMEM = 
{
  0x1b, 0x5b, 0x31, 0x35, 0x3b, 0x33, 0x33, 0x48, 0x40, 0x58, 0x65, 0x6e, 0x6f, 0x74, 0x68, 0x1b, 0x5b, 0x31, 0x37, 0x3b, 0x31, 0x48, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x42, 0x72, 0x69, 0x64, 0x67, 0x65, 0x20, 0x76, 0x30, 0x2e, 0x31, 0x1b, 0x5b, 0x31, 0x39, 0x3b, 0x32, 0x48, 0x2a, 0x20, 0x57, 0x69, 0x46, 0x69, 0x3a, 0x09, 0x09, 0x09, 0x2e, 0x2e, 0x2e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x5b, 0x32, 0x30, 0x3b, 0x32, 0x48, 0x2a, 0x20, 0x53, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x3a, 0x2e, 0x2e, 0x2e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x5b, 0x32, 0x34, 0x3b, 0x36, 0x48, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x2f, 0x44, 0x69, 0x73, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x1b, 0x5d, 0x09, 0x54, 0x73, 0x2b, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x78, 0x69, 0x6f, 0x6e, 0x2f, 0x46, 0x69, 0x6e, 0x1b, 0x5c
};

const byte VDT_WIFI_KO[] PROGMEM = { 0x1b, 0x41, 0x1b, 0x5b, 0x31, 0x39, 0x3b, 0x31, 0x32, 0x48, 0x4b, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x47 };
const byte VDT_WIFI_OK[] PROGMEM = { 0x1b, 0x42, 0x1b, 0x5b, 0x31, 0x39, 0x3b, 0x31, 0x32, 0x48, 0x4f, 0x4b, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x47 };
const byte VDT_WIFI_DISCONNECTED[] PROGMEM = { 0x1b, 0x42, 0x1b, 0x5b, 0x31, 0x39, 0x3b, 0x31, 0x32, 0x48, 0x44, 0x69, 0x73, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x65, 0x64, 0x1b, 0x47 }; 

const byte VDT_SERVICE_KO[] PROGMEM = { 0x1b, 0x41, 0x1b, 0x5b, 0x32, 0x30, 0x3b, 0x31, 0x32, 0x48, 0x4b, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x47 };
const byte VDT_SERVICE_OK[] PROGMEM = { 0x1b, 0x42, 0x1b, 0x5b, 0x32, 0x30, 0x3b, 0x31, 0x32, 0x48, 0x4f, 0x4b, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1b, 0x47 };
const byte VDT_SERVICE_DISCONNECTED[] PROGMEM = { 0x1b, 0x42, 0x1b, 0x5b, 0x32, 0x30, 0x3b, 0x31, 0x32, 0x48, 0x44, 0x69, 0x73, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x65, 0x64, 0x1b, 0x47 };

const byte VDT_BEEP[] PROGMEM = { 0x07 };
const byte VDT_RESET[] PROGMEM = { 0x1b, 0x5b, 0x31, 0x3b, 0x31, 0x48 };
const byte VDT_CLEAR_RESET[] PROGMEM = { 0x1b, 0x5b, 0x31, 0x3b, 0x31, 0x48, 0x1b, 0x5b, 0x30, 0x4a };

const byte KEY_TS_CONNECTION_SWITCH[] PROGMEM = { 0x13, 0x49 };



WiFiClient client;

int status = WL_IDLE_STATUS;

bool connected = false;

byte buffer[] = { 0x00, };
int buffer_len = 0;

byte sequence[] = { 0x00, 0x00 };



void update_sequence(byte data)
{
  sequence[0] = sequence[1];
  sequence[1] = data;
}

bool is_ts_connection_pressed(void) 
{
  return (sequence[0] == KEY_TS_CONNECTION_SWITCH[0] && sequence[1] == KEY_TS_CONNECTION_SWITCH[1]);
}

void beep_error()
{
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  delay(100);
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  delay(100);
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  delay(100);
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));

  delay(300);

  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  delay(100);
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  delay(100);
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  delay(100);
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));

  delay(300);

  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  delay(100);
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  delay(100);
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  delay(100);
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
}

void on_minitel_connected(void) 
{
  Serial.println("Connecting...");
  Serial.println("Printing Splash boot and screen");
  Serial1.write(VDT_CLEAR_RESET, sizeof(VDT_CLEAR_RESET));
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));

  Serial1.write(VDT_RESET, sizeof(VDT_RESET));
  Serial1.write(VDT_LOGO, sizeof(VDT_LOGO));
  Serial1.write(VDT_RESET, sizeof(VDT_RESET));
  Serial1.write(VDT_PAGE, sizeof(VDT_PAGE));

  Serial.println("Scanning networks...");
  int n = WiFi.scanNetworks();
  if (n == 0) {
    Serial.println("No networks found!");
  } else {
    Serial.print("Found ");
    Serial.print(n);
    Serial.println(" networks:");
    for (int i = 0; i < n; ++i) {
      Serial.print("SSID: ");
      Serial.println(WiFi.SSID(i));
      Serial.print("RSSI: ");
      Serial.println(WiFi.RSSI(i));
    }
  }

  Serial.println("Attempting to connect to WPA network...");
  Serial.print("SSID: ");
  Serial.println(SECRET_SSID);

  status = WiFi.begin(SECRET_SSID, SECRET_PASS);
  if ( status != WL_CONNECTED) 
  {
    Serial.println("Couldn't get a wifi connection");
    Serial.print("Status: ");
    Serial.println(status);
    Serial1.write(VDT_WIFI_KO, sizeof(VDT_WIFI_KO));
    Serial1.write(VDT_SERVICE_KO, sizeof(VDT_SERVICE_KO));
    beep_error();
    connected = false;
  }
  else
  {
    Serial1.write(VDT_WIFI_OK, sizeof(VDT_WIFI_OK));
    Serial.println("Connected to wifi");
    Serial.print("Starting connection...");
    if (client.connect(SERVICE_ADDRESS, SERVICE_PORT))
    {
      Serial.println("[OK]");
      Serial1.write(VDT_SERVICE_OK, sizeof(VDT_SERVICE_OK));
      connected = true;
    }
    else
    {
      Serial.println("[KO]");
      Serial1.write(VDT_SERVICE_KO, sizeof(VDT_SERVICE_KO));
      beep_error();
      connected = false;
    }
  }
  Serial.println("Connected to minitel");

  Serial1.flush();
  buffer_len = 0;
}

void on_minitel_disconnected(void) 
{
  Serial.println("Disconnecting...");
  client.stop();

  Serial.println("Printing Splash boot and screen");

  Serial1.write(VDT_CLEAR_RESET, sizeof(VDT_CLEAR_RESET));
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));

  Serial1.write(VDT_RESET, sizeof(VDT_RESET));
  Serial1.write(VDT_LOGO, sizeof(VDT_LOGO));
  Serial1.write(VDT_RESET, sizeof(VDT_RESET));
  Serial1.write(VDT_PAGE, sizeof(VDT_PAGE));
  Serial1.write(VDT_WIFI_DISCONNECTED, sizeof(VDT_WIFI_DISCONNECTED));
  Serial1.write(VDT_SERVICE_DISCONNECTED, sizeof(VDT_SERVICE_DISCONNECTED));
  Serial1.write(VDT_BEEP, sizeof(VDT_BEEP));
  Serial.println("Disconnected");

  Serial1.flush();
  buffer_len = 0;
}

void setup() 
{
  Serial.begin(SERIAL_HOST_BAUDRATE);
  delay(2000);

  Serial.println("*setup*");
  
  Serial1.begin(SERIAL_MINITEL_BAUDERATE, SERIAL_7E1);

  Serial.println("*loop*");
}

void loop() 
{ 
  while(client.available())
  {
    byte data = client.read();
    Serial.print("FROM SERVICE: ");
    Serial.println(data, HEX);
    if(data == -1)
    {
      Serial.println("Error - client.read() returned -1");
      break;
    }
    buffer[buffer_len] = data;
    buffer_len++;
    if(buffer_len == sizeof(buffer))
    {
      break;
    }
  }

  if (buffer_len)
  {
    int len = Serial1.write(buffer, buffer_len);
    if (len != buffer_len)
    {
      Serial.print("Error - Serial1.write() returned ");
      Serial.print(len);
      Serial.print(", expected ");
      Serial.println(buffer_len);
    }
    else
    {
      Serial.print("TO MINITEL: ");
      for (int i = 0; i < buffer_len; i++) Serial.print(buffer[i], HEX);
      Serial.println("");
    }
    buffer_len = 0;
  }

  while(Serial1.available())
  {
    byte data = byte(Serial1.read());
    if(data == -1)
    {
      Serial.println("Error - Serial1.read() returned -1");
      break;
    }
    Serial.print("FROM  MINITEL: ");
    Serial.println(data, HEX);
    update_sequence(data);
    
    buffer[buffer_len] = data;
    buffer_len++;

    if (is_ts_connection_pressed())
    {
      connected = !connected;
      if (connected)
      {
        on_minitel_connected();
      }
      else
      {
        on_minitel_disconnected();
      }
    }
    
  }

  if (buffer_len)
  {
    int len = client.write(buffer, buffer_len);
    if (len != buffer_len)
    {
      Serial.print("Error - client.write() returned ");
      Serial.print(len);
      Serial.print(", expected ");
      Serial.println(buffer_len);
    }
    else
    {
      Serial.print("TO SERVICE: ");
      for (int i = 0; i < buffer_len; i++) Serial.print(buffer[i], HEX);
      Serial.println("");
    }
    buffer_len = 0;
  }
}
