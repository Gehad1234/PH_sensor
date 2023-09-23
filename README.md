# pH Sensor Data Logger with ThingSpeak Integration
## one of semicolon startup IOT projects (My startup)

### Description

This Arduino project reads pH values from a pH sensor and sends the data to the ThingSpeak IoT platform via Wi-Fi. The project utilizes an analog pH sensor connected to analog pin A0 and communicates with ThingSpeak using the ESP8266 Wi-Fi module.

### Components

- **pH Sensor**: The project uses a pH sensor to measure the pH of a solution.

- **ESP8266 Wi-Fi Module**: The ESP8266 module is used to connect to Wi-Fi and send data to the ThingSpeak platform.

### Setup

1. Connect the pH sensor to the Arduino board:
   - Connect the sensor's analog output pin to analog pin A0 on the Arduino.
   - Connect the sensor's power and ground pins to 5V and GND on the Arduino, respectively.

2. Ensure you have the required libraries installed in your Arduino IDE:
   - Adafruit GFX Library
   - Adafruit SSD1306 Library
   - ESP8266WiFi Library
   - ThingSpeak Library

3. Replace the placeholders in the code with your specific configuration:
   - `apiKey`: Replace it with your ThingSpeak Write API key.
   - `ssid`: Replace it with your Wi-Fi SSID.
   - `pass`: Replace it with your Wi-Fi password.

4. Upload the code to your Arduino board.

### Usage

Once the project is set up and the Arduino is powered on, it will continuously read pH values from the sensor. It calculates the pH value based on the sensor's analog output. The pH value is then sent to the ThingSpeak platform, allowing you to monitor and analyze pH data over time.

### ThingSpeak Configuration

Make sure you have set up a ThingSpeak channel with the appropriate fields to receive and display the pH data. The channel should match the fields used in the code for data upload.

### Contributing

Feel free to modify and extend this project to suit your specific needs. You can enhance it by adding additional sensors, data logging features, or integrating it with other IoT platforms. Contributions and improvements are welcome!

### License

This project is open-source and available under an open-source license (mention the specific license used). Please refer to the LICENSE.md file for more details.

### Author

Gehad Abdellah 

### Acknowledgments

Special thanks to the authors and contributors of the libraries used in this project for their work in making this project possible.
