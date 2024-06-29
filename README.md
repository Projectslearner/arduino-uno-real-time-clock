# Arduino Uno Real Time Clock 

#### Project Overview

This project utilizes an Arduino Uno and the DS3231 Real Time Clock (RTC) module to accurately keep track of date and time. The DS3231 module communicates with the Arduino via I2C protocol to provide precise timekeeping capabilities.

#### Components Needed

- **Arduino Uno**
- **DS3231 RTC Module**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup

1. **Connect DS3231 RTC Module to Arduino Uno:**
   - Connect the SDA pin of the DS3231 module to Arduino's A4 pin.
   - Connect the SCL pin of the DS3231 module to Arduino's A5 pin.
   - Connect VCC and GND of the DS3231 module to +5V and GND on the Arduino, respectively.

#### Instructions

1. **Circuit Setup:**
   - Wire up the DS3231 RTC module to the Arduino Uno as per the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the serial monitor with a baud rate of 9600.
   - Observe the current date and time printed on the Serial Monitor, which updates every second.

#### Applications

- **Clock and Calendar Systems:** Suitable for projects requiring accurate timekeeping.
- **Data Logging:** Timestamp data in logging applications for record-keeping.
- **Automation:** Synchronize events and actions based on real-time clock values.

#### Notes

- Ensure the DS3231 module is correctly wired to the Arduino and powered.
- The RTC maintains accurate time even when the Arduino is powered off, thanks to its backup battery.
- Customize the code to add alarm functionalities or adjust time formats as needed.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-real-time-clock)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted with ❤️ by ProjectsLearner