# 🏠 ESP32 Home Automation using Blynk IoT

![ESP32](https://img.shields.io/badge/ESP32-IoT-blue)
![Blynk](https://img.shields.io/badge/Blynk-IoT-green)
![C++](https://img.shields.io/badge/Language-C++-orange)
![PlatformIO](https://img.shields.io/badge/Platform-PlatformIO-purple)


A complete IoT-based Home Automation System built using ESP32 and Blynk IoT. This project allows users to remotely control AC appliances such as bulbs, fans, and other devices through the Blynk mobile application from anywhere in the world.

---

# 📖 Overview

Home Automation is one of the most popular applications of the Internet of Things (IoT). This project demonstrates how an ESP32 microcontroller can be connected to the Blynk IoT platform to remotely control electrical appliances over Wi-Fi.

The system uses an ESP32 development board connected to a relay module. Commands sent from the Blynk mobile application are received by the ESP32 through the internet and used to switch connected appliances ON or OFF.

This project serves as an excellent beginner-to-intermediate IoT project and can be expanded into a complete smart home ecosystem.

---

# ✨ Features

## 📱 Mobile Control

- Control appliances from anywhere in range 
- Real-time switching
- User-friendly mobile interface
- Instant response

## 🌐 IoT Connectivity

- Wi-Fi based communication
- Cloud connectivity via Blynk
- Remote access over the internet

## ⚡ Appliance Control

- Bulb ON/OFF
- Fan ON/OFF
- Socket Control
- Other AC Loads

## 🔄 Real-Time Monitoring

- Live device status
- Instant switching feedback
- Cloud synchronization

## 🛡 Reliability

- Automatic reconnection
- Stable ESP32 Wi-Fi communication
- Secure Blynk authentication

---

# 🏗 System Architecture

```text
             ┌─────────────────┐
             │  Blynk Mobile   │
             │      App        │
             └────────┬────────┘
                      │
                      │ Internet
                      │
             ┌────────▼────────┐
             │  Blynk Cloud    │
             └────────┬────────┘
                      │
                 Wi-Fi Network
                      │
             ┌────────▼────────┐
             │      ESP32      │
             └────────┬────────┘
                      │
                      │ GPIO 13
                      │
             ┌────────▼────────┐
             │ Relay Module    │
             └────────┬────────┘
                      │
                      │
             ┌────────▼────────┐
             │ AC Appliance    │
             │ (Bulb/Fan)      │
             └─────────────────┘
```

---

# 🔌 Hardware Components

| Component | Quantity |
|------------|----------|
| ESP32 Development Board | 1 |
| 1-Channel optocoupler Relay Module | 1 |
| AC Bulb / Fan | 1 |
| Breadboard | 1 |
| Jumper Wires | Multiple |
| Mobile Phone | 1 |
| Wi-Fi Network | 1 |

---

# 🔧 Circuit Connections

## ESP32 ↔ Relay Module

| Relay Module | ESP32 |
|-------------|--------|
| VCC | VIN / 5V |
| GND | GND |
| IN | GPIO 13 |

---

## Relay ↔ AC Bulb

### Relay Terminals

| Terminal | Function |
|-----------|----------|
| COM | Common |
| NO | Normally Open |
| NC | Normally Closed |

### Recommended Connection

```text
AC Phase
    │
    ▼
   COM
    │
 Relay
    │
   NO
    │
    ▼
 Bulb Phase

Neutral ─────────────► Bulb Neutral
```

### Working

- Relay OFF → Bulb OFF
- Relay ON → Bulb ON

---

# 📱 Blynk Setup

## Step 1: Create Template

Create a new template in Blynk Console:

- Hardware: ESP32
- Connection Type: Wi-Fi

---

## Step 2: Create Datastream

| Property | Value |
|----------|--------|
| Name | Relay |
| Virtual Pin | V0 |
| Data Type | Integer |
| Min | 0 |
| Max | 1 |

---

## Step 3: Add Dashboard Widget

Add a:

- Switch Widget

Configure:

| Setting | Value |
|----------|--------|
| Datastream | V0 |
| Mode | Switch |

---

## Step 4: Create Device

Create a device from the template and copy:

- Template ID
- Template Name
- Auth Token

---

# 📂 Project Structure

```text
ESP32-Home-Automation/
│
├── include/
│
├── lib/
│
├── src/
│   └── main.cpp
│
├── test/
│
├── .gitignore
│
├── platformio.ini
│
├── README.md
│
└── images/
```

---

# 💻 Software Requirements

## Development Environment

- Visual Studio Code
- PlatformIO Extension

## Programming Language

- C++

## Libraries

```cpp
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
```

---

# ⚙️ Program Flow

```text
ESP32 Boot
    │
    ▼
Connect to Wi-Fi
    │
    ▼
Connect to Blynk Cloud
    │
    ▼
Wait for User Command
    │
    ▼
Switch ON ?
 ┌──┴───┐
 │      │
YES     NO
 │      │
 ▼      ▼
Relay   Relay
 ON      OFF
 │        │
 ▼        ▼
Bulb ON  Bulb OFF
```

---

# 🚀 Installation

## Clone Repository

```bash
git clone https://github.com/YOUR_USERNAME/ESP32-Home-Automation.git
```

---

## Open Project

```bash
cd ESP32-Home-Automation
code .
```

---

## Install Dependencies

PlatformIO automatically installs required libraries.

---

## Update Credentials

```cpp
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
```

---

## Upload Firmware

```bash
pio run --target upload
```

---

## Monitor Serial Output

```bash
pio device monitor
```

---


Then display them:

```markdown


# 🎥 Project Demonstration

## Watch Full Working Video

[![ESP32 Home Automation](https://img.youtube.com/vi/YOUR_VIDEO_ID/maxresdefault.jpg)](YOUR_VIDEO_LINK)

Click the thumbnail above to watch the complete project demonstration.

---

# 🎯 Applications

- Smart Home Automation
- Remote Appliance Control
- Smart Offices
- Energy Saving Systems
- IoT Learning Projects
- Embedded Systems Projects
- Engineering Mini Projects
- Automation Research

---

# 🔮 Future Improvements

- Multiple Relay Control
- Voice Control using Google Assistant
- Alexa Integration
- MQTT Communication
- Energy Monitoring
- ESP32 Web Server
- Scheduling System
- Mobile Notifications
- RFID Access Control
- AI-Based Automation

---

# 🛡 Safety Precautions

⚠️ This project uses AC mains voltage.

Always:

- Disconnect power before wiring.
- Use proper insulation.
- Avoid touching exposed wires.
- Test connections carefully.
- Use relay modules with optocoupler isolation.

---

# 👨‍💻 Author

---

#  Manish Pal

**B.Tech – Electronics & Communication Engineering (ECE)**

Interests:

- Embedded Systems
- ESP32 Development
- IoT Solutions
- Home Automation
- Electronics Design

GitHub: https://github.com/YOUR_USERNAME

---

# ⭐ Support

If you found this project helpful:

⭐ Star this repository

🍴 Fork this repository

📢 Share it with others
 
 SUBSCRIBE

---
