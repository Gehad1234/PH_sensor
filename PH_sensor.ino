const int analogInPin = A0;
int sensorValue = 0;
unsigned long int avgValue;
float b;
int buf[10],temp;
String apiKey = "ZIG0TVLS9XQQ42NO"; // Enter your Write API key from ThingSpeak
const char *ssid = "Alexahome";     // replace with your wifi ssid and wpa2 key
const char *pass = "12345678";
const char* server = "api.thingspeak.com";
WiFiClient client;
void setup() {
Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //initialize with the I2C addr 0x3C (128x64)
  display.clearDisplay();
  delay(10);
 
  Serial.println("Connecting to ");
  Serial.println(ssid);
  
  display.clearDisplay();
  display.setCursor(0,0);  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.println("Connecting to ");
  display.setTextSize(2);
  display.print(ssid);
  display.display();
  
  WiFi.begin(ssid, pass);
 
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
    Serial.println("");
    Serial.println("WiFi connected");
    
    display.clearDisplay();
    display.setCursor(0,0);  
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.print("WiFi connected");
    display.display();
    delay(4000);
}
void loop() {
for(int i=0;i<10;i++)
{
 buf[i]=analogRead(analogInPin);
 delay(10); }
for(int i=0;i<9;i++) {
 for(int j=i+1;j<10;j++)

{
 if(buf[i]>buf[j])

{
 temp=buf[i];
 buf[i]=buf[j];
 buf[j]=temp;

}

}
}
avgValue=0;
for(int i=2;i<8;i++)
avgValue+=buf[i];
float pHVol=(float)avgValue*5.0/1024/6;
float phValue =
-5.70 * pHVol + 21.34;
Serial.print("sensor = ");
Serial.println(phValue);

delay(20);
}
