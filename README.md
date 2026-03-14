# 🤌ESP32 Touch Sensor with LED Indicator

Simple ESP32 project that uses a **🟢built-in touch pin (GPIO 2)** to detect touch and lights an **🔴external LED (on GPIO 5)** when the touch value drops below a defined threshold.

## 👀Features
- Uses ESP32's native **`touchRead()`** API (no external sensor needed)
- LED turns **ON** when touch is detected (value ≤ threshold)
- Real-time monitoring via Serial at 115200 baud
- Adjustable sensitivity via **`TOUCH_THRESHOLD`** variable

## 🧰Hardware Requirements
- ESP-WROOM-32 development board
- Red LED light
- 3 Female-Male Jumper Wires
- USB-A to USB-C Cable 1m(Data Transferring Cable)

  ---
## ➿Wiring
- **Touch electrode**: bare wire connected directly to **GPIO 2** (P2)
- **LED circuit**:
  - LED anode ➡️ **GPIO 5**
  - LED cathode ➡️ **GND**

# ⭐ESP32 Touch Sensor Demo
>Note: Tune `TOUCH_THRESHOLD` to match your setup. I used 350 for this project

## 🗺️Wiring Instructions:
**Touch input**
- Connect a jumper wire(female-male) directly to GPIO 2. This wire acts as the **touch-sensitive electrode**, no extra components needed. Touching the end of the wire with your finger decreases the touchRead value.
  
**LED (with current-limiting resistor)**
- Connect the LED anode (longer leg) ➡️ GPIO 5. Connect the LED cathode (shorter leg) ➡️ GND (any GND pin on the ESP32). This is a sourcing configuration **(ESP32 HIGH = LED on)**.
## 🥇Finished Setup
<img src = https://github.com/boydjawun/arduino-esp32-touch-sensor-LED-monitor/blob/main/assets/Photo_of_setup.png height = 600 width = 700/>

## 🔄ArduinoIDE:
1. Upload the [touch sensor](https://github.com/boydjawun/arduino-esp32-touch-sensor-LED-monitor/blob/main/touch_sensor.ino) sketch using Arduino IDE
2. Open Serial Monitor (115200 baud)
3. Touch the wire ➡️ LED lights up and you’ll see **"TOUCH DETECTED"** and an indication that the LED light has powered **ON** on the Serial Monitor

## 🤔Typical touchRead() Values
- Untouched: 60–120
- Touched: 20–60 (varies by board & finger contact)

## ⏯️Touch Demo Video and Serial Monitor Demonstration
[Check out the Demo on Youtube!](https://youtube.com/shorts/Yt_z1moq-TY?feature=share)

## 🚫Before touching the sensor
<img src = https://github.com/boydjawun/arduino-esp32-touch-sensor-LED-monitor/blob/main/assets/Screenshot%202026-03-14%20121154.png height = 600 width = 700/>

## ✔️After touching the sensor
<img src = https://github.com/boydjawun/arduino-esp32-touch-sensor-LED-monitor/blob/main/assets/Screenshot%202026-03-14%20121226.png height = 600 width = 700/>




