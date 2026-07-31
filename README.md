# ☀️ Solar-Powered Smart Water Cooler Using Arduino

> An eco-friendly Arduino-based smart water cooling system powered by solar energy for portable and sustainable applications.


---

# 📖 Overview

The **Solar-Powered Smart Water Cooler** is an embedded systems project designed to provide an energy-efficient solution for cooling drinking water using renewable energy.

The system utilizes an **Arduino Uno** as the main controller, continuously monitoring water temperature through a **DS18B20 digital temperature sensor**. When the temperature exceeds a predefined threshold, the Arduino automatically activates a **DC water pump** and **cooling fan** via relay modules. The cooling process uses a compact aluminum radiator (heat exchanger) to reduce water temperature efficiently.

A photovoltaic solar panel charges a 12V battery through a solar charge controller, allowing the system to operate completely off-grid.

---

# ✨ Features

* 🌞 Solar-powered operation
* 💧 Automatic water cooling
* 🌡 Real-time temperature monitoring
* 📟 LCD temperature display
* ⚙️ Automatic fan control
* 🚰 Automatic water circulation
* 🔋 Low power consumption
* 🌍 Environmentally friendly
* 📈 Expandable IoT architecture
* 🔧 Modular hardware design

---

# 🛠 Hardware Components

| Component                  | Quantity    |
| -------------------------- | ----------- |
| Arduino Uno                | 1           |
| Solar Panel (20W)          | 1           |
| Solar Charge Controller    | 1           |
| 12V Rechargeable Battery   | 1           |
| DS18B20 Temperature Sensor | 1           |
| DC Water Pump              | 1           |
| Mini Aluminum Radiator     | 1           |
| 12V Cooling Fan            | 1           |
| Relay Module (2-Channel)   | 1           |
| 16x2 LCD I2C Display       | 1           |
| Water Tubes                | As Required |
| Insulated Water Container  | 1           |

---

# ⚙️ System Architecture

```text
Solar Panel
      │
      ▼
Charge Controller
      │
      ▼
12V Battery
      │
      ▼
Arduino Uno
 ├── DS18B20 Sensor
 ├── LCD Display
 ├── Relay Module
 │      ├── Water Pump
 │      └── Cooling Fan
 └── Status LED
```

---

# 🔄 Working Principle

1. The solar panel charges the battery.
2. Arduino continuously measures the water temperature.
3. Temperature is displayed on the LCD.
4. If the temperature rises above the configured limit:

   * Cooling fan turns ON.
   * Water pump starts circulating water through the radiator.
5. Once the desired temperature is reached:

   * Fan stops.
   * Pump stops.
6. The system waits for the next temperature increase.

---

# 📂 Project Structure

```text
Solar-Water-Cooler/
│
├── Arduino_Code/
│      SolarWaterCooler.ino
│
├── Circuit/
│      Wiring_Diagram.png
│
├── Images/
│      Prototype.jpg
│      Inside_View.jpg
│      LCD.jpg
│
├── README.md
└── LICENSE
```

---

# 📊 Technical Specifications

| Parameter          | Value          |
| ------------------ | -------------- |
| Supply Voltage     | 12V DC         |
| Controller         | Arduino Uno    |
| Temperature Sensor | DS18B20        |
| Display            | LCD 16×2 I2C   |
| Cooling Method     | Radiator + Fan |
| Water Circulation  | DC Pump        |
| Power Source       | Solar Panel    |
| Energy Storage     | 12V Battery    |

---

# 📸 Project Images

## Prototype

Insert a picture of the assembled system.

## Internal Components

Insert an internal hardware image.

## Wiring Diagram

Insert the circuit diagram.

## LCD Display

Insert the LCD output image.

---

# 🚀 Future Improvements

* ESP32 Wi-Fi Connectivity
* Mobile Application
* IoT Dashboard
* MQTT Communication
* Cloud Data Logging
* Battery Monitoring
* Solar Energy Analytics
* PID Temperature Control
* Automatic Water Level Detection
* AI-based Energy Optimization

---

# 💻 Software

* Arduino IDE
* C++
* Embedded Programming
* OneWire Library
* DallasTemperature Library
* LiquidCrystal_I2C Library

---

# 🎯 Learning Outcomes

This project demonstrates practical experience in:

* Embedded Systems
* Renewable Energy Systems
* Arduino Programming
* Sensor Integration
* Relay Control
* Thermal Management
* Electronic Hardware Design
* Sustainable Engineering
* IoT System Design
* Real-Time Monitoring

---

# 🌍 Applications

* Remote Areas
* Camping
* Smart Homes
* Portable Water Cooling
* Renewable Energy Demonstration
* Engineering Education
* Embedded Systems Training

---

# 🤝 Contributing

Contributions are welcome!

If you have ideas for improving this project, feel free to fork the repository and submit a pull request.

---

# 📄 License

This project is licensed under the MIT License.

---

# 👨‍💻 Author

Alireza Rezaei Asl

Electrical & Control Engineering Student

📍 Isfahan, Iran

📧 alirezarezaii943@gmail.com

🔗 GitHub

https://github.com/alirezarezaei2005
