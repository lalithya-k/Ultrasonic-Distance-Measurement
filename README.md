# Ultrasonic Distance Measurement | Arduino, TinkerCAD Simulation

This project simulates an ultrasonic distance measurement system using Arduino Uno and the HC-SR04 ultrasonic sensor in **TinkerCAD**.

<img width="1536" height="656" alt="Bodacious Curcan-Blorr" src="https://github.com/user-attachments/assets/56420293-e99d-413b-9bb1-a48e45169933" />


## 📌 Components
- Arduino Uno R3
- HC-SR04 Ultrasonic Sensor
- Breadboard & jumper wires (in simulation)

## ⚡ How It Works
1. The **TRIG pin** sends a 10µs pulse to the ultrasonic sensor.  
2. The **ECHO pin** measures the time taken for the reflected sound wave.  
3. Distance is calculated using the formula:  
   \[
   \text{distance} = \frac{time \times 0.034}{2}
   \]  
   (where 0.034 cm/µs is the speed of sound in air).  

4. Results are displayed live on the Arduino **Serial Monitor**.  

## 🖼 Simulation
🔗 [TinkerCAD Project Link](https://www.tinkercad.com/things/3bIyaNpWi3F/editel?returnTo=%2Fdashboard&sharecode=5O9DrxBUGtFy-_LJDoxncAUJDzKvLP2yWbRfopVVhu4)  

## 💻 Code
The Arduino code is in `ultrasonic_sensor.ino`.

## 🎯 Output
- Displays distance (in cm) on the Serial Monitor.  
- Distance values update dynamically as objects are moved closer/farther in simulation.  

---
