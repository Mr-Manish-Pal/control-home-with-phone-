# 🏠 ESP32 Home Automation using Blynk IoT

<p align="center">
  <img src="https://img.shields.io/badge/ESP32-IoT-blue?style=for-the-badge">
  <img src="https://img.shields.io/badge/Blynk-IoT-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/C++-Embedded-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/PlatformIO-VS_Code-purple?style=for-the-badge">
</p>

<p align="center">
  <b>Control Electrical Appliances From Anywhere Using ESP32 & Blynk Cloud</b>
</p>

---

## 📌 Overview

ESP32 Home Automation is an IoT-based smart control system that enables users to remotely operate electrical appliances such as bulbs, fans, and sockets using a smartphone.

The project utilizes ESP32, a relay module, Wi-Fi connectivity, and the Blynk IoT platform to provide real-time remote switching over the internet.

This project demonstrates the practical implementation of:

- Internet of Things (IoT)
- Embedded Systems
- Cloud Communication
- Mobile Application Integration
- Home Automation

---

## ✨ Features

### 📱 Smartphone Control
- Turn appliances ON/OFF remotely
- Real-time switching
- User-friendly mobile interface

### 🌐 IoT Connectivity
- Wi-Fi-based communication
- Blynk Cloud integration
- Remote access from anywhere

### ⚡ Appliance Automation
- Bulb Control
- Fan Control
- Socket Control
- Relay-based switching

### 🔄 Real-Time Operation
- Instant response
- Cloud synchronization
- Device status updates

### 🛡 Reliability
- Automatic reconnection
- Secure authentication
- Stable communication

---

## 🎥 Project Demonstration

[![ESP32 Home Automation Demo]

📺 Click the thumbnail above to watch the complete project demonstration.

---

## 🏗 System Architecture

```text
          Smartphone
               │
               ▼
         Blynk Cloud
               │
           Internet
               │
               ▼
            ESP32
               │
         GPIO Control
               │
               ▼
        Relay Module
               │
               ▼
        AC Appliance
```

---

## 🔌 Hardware Components

| Component | Quantity |
|------------|----------|
| ESP32 Development Board | 1 |
| Relay Module | 1 |
| AC Bulb/Fan | 1 |
| Jumper Wires | Multiple |
| Breadboard | 1 |
| Mobile Phone | 1 |
| Wi-Fi Network | 1 |

---

## 🔧 Circuit Connections

### ESP32 → Relay Module

| ESP32 | Relay |
|--------|--------|
| GPIO 13 | IN |
| GND | GND |
| VIN / 5V | VCC |

### Relay → AC Bulb

| Relay Terminal | Connection |
|----------------|------------|
| COM | AC Phase Input |
| NO | Bulb Phase |
| NC | Not Used |
| Neutral | Direct to Bulb |

---

## 📱 Blynk Configuration

### Datastream

| Parameter | Value |
|------------|--------|
| Name | Relay |
| Virtual Pin | V0 |
| Data Type | Integer |
| Range | 0 - 1 |

### Dashboard Widget

| Widget | Datastream |
|----------|------------|
| Switch | V0 |

---

## 📂 Project Structure

```text
ESP32-Home-Automation/
│
├── src/
│   └── main.cpp
│
├── include/
├── lib/
├── test/
│
├── images/
│   ├── hardware-setup.jpg
│   ├── circuit-diagram.png
│   └── blynk-dashboard.jpg
│
├── platformio.ini
├── .gitignore
├── LICENSE
└── README.md
```

---


## 🔐 Configuration

Replace the following credentials before uploading:

```cpp
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
```

---

## 📸 Screenshots

### Hardware Setup

![Hardware Setup](images/hardware-setup.jpg)

### Circuit Diagram

![Circuit Diagram](images/circuit-diagram.png)

### Blynk Dashboard

![Blynk Dashboard](images/blynk-dashboard.jpg)

---

## 🎯 Applications

- Smart Home Automation
- IoT Learning Projects
- Embedded Systems Projects
- Engineering Mini Projects
- Remote Appliance Control
- Smart Office Automation

---

## 🔮 Future Improvements

- Multi-Relay Support
- Voice Control
- Google Assistant Integration
- Alexa Integration
- MQTT Protocol
- Energy Monitoring
- Scheduling System
- Notification Alerts

---

## 🛡 Safety Warning

This project involves AC mains voltage.

- Disconnect power before wiring.
- Use proper insulation.
- Avoid exposed conductors.
- Verify connections carefully before powering ON.

---

## 👨‍💻 Author

### Manish Pal

**B.Tech – Electronics & Communication Engineering (ECE)**

Interests:

- Embedded Systems
- ESP32 Development
- IoT Solutions
- Home Automation
- Electronics Design


---

## ⭐ Support

If you found this project useful:

⭐ Star the repository

🍴 Fork the repository

📢 Share with others

   SUBSCRIBE 

---

## 📄 License

This project is released for educational and learning purposes.