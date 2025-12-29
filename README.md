# IoT-Based Fire Alarm System

A smart fire detection system using an Arduino Uno + WiFi R3 (ATmega328P + ESP8266) hybrid board. This project detects flames and sends real-time push notifications to a smartphone via the Blynk IoT platform.

## 🚀 Features
- **Real-time Detection:** High-sensitivity flame sensor.
- **Local Alert:** High-decibel buzzer for immediate warning.
- **IoT Integration:** Remote monitoring and push notifications via Blynk.
- **Hybrid Logic:** Uses Serial communication between ATmega328P and ESP8266.

## 🛠 Hardware Used
- Arduino Uno + WiFi R3 (Hybrid Board)
- Flame Sensor (D0 connected to D2)
- Active Buzzer (I/O connected to D3)
- Jumper wires & USB Power

## ⚙️ DIP Switch Settings
This board requires manual switching for different modes:
| Mode | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Upload to Arduino** | OFF | OFF | ON | ON | OFF | OFF | OFF | OFF |
| **Upload to ESP8266** | OFF | OFF | OFF | OFF | ON | ON | ON | OFF |
| **Run Mode** | ON | ON | OFF | OFF | OFF | OFF | OFF | OFF |

## 🧠 Code
Check out Arduino code [`here`](https://github.com/Sanavimjagtap/IoT-Fire-Smoke-Alarm/commit/05042ba9d7b138275774e127c7add6437f671cbc) and ESP8266 code [`here`](https://github.com/Sanavimjagtap/IoT-Fire-Smoke-Alarm/blob/main/ESP8266.ino)

## 📸 Screenshots
![Blynk Notification](Images/your_notification_image.png)
![Wiring Setup](Images/your_wiring_image.png)

## 💻 Software Setup
1. Clone this repository.
2. Install the **Blynk** library in Arduino IDE.
3. Replace `BLYNK_AUTH_TOKEN`, `SSID`, and `PASS` in the ESP8266 code.
4. Set DIP switches to **Upload to Arduino**, flash the code.
5. Set DIP switches to **Upload to ESP8266**, flash the code.
6. Switch to **Run Mode** and reset the board.
