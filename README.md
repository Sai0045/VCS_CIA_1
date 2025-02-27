# 🌱 ESP32-CAM Plant Monitoring System  

## 📖 Project Description  
This project is a **plant monitoring system** using the **ESP32-CAM**, **machine learning**, and environmental sensors (**Soil Moisture Sensor, DHT22**).  
It detects plant diseases and monitors plant health by analyzing environmental conditions and capturing plant images.

---

## 👨‍💻 Team Members & Their Contributions  
| Name         | Role                          | Contribution                                      |
|--------------|-------------------------------|---------------------------------------------------|
|   Sairaj     | Embedded Systems Developer    | Configured ESP32-CAM and sensor integration       |
|   Akshay     | Machine Learning Engineer     | Trained ML model for plant disease detection      |
|   Pramod     | Software Developer            | Developed firmware and cloud integration          |
|   Swadesh    | Hardware Engineer             | Designed circuit and handled hardware interfacing |

---

## 🚀 How to Use the Code  

### **🔹 1. Prerequisites**  
Before running the code, install the following:  
- **Arduino IDE** with ESP32 board support  
- **Python 3.x** (for ML model)  
- Required libraries:  
  ```bash
  pip install opencv-python numpy tensorflow keras



###🔹**2. Hardware Setup**
1 . Connect ESP32-CAM to your computer.
2 . Attach the DHT22 and Soil Moisture Sensor as per the circuit diagram.
3 . Ensure the ESP32-CAM module is flashed with the correct firmware.

###🔹 **3. Uploading Code to ESP32-CAM**
1 . Open esp32_cam_plant_monitor.ino in Arduino IDE.
2 . Configure WiFi credentials in the code.
3 . Select ESP32 Wrover Module as the board and upload.

###🔹 **4. Running the Machine Learning Model**
Use plant_disease_model.py to detect diseases from captured images.
Execute the script:

**python plant_disease_model.py**

🔹 **5. Viewing Sensor Data**
Access live sensor data and images via the web dashboard hosted on ESP32.
Use the serial monitor to debug sensor values.

###**For any queries, contact us at sairajabhale@gmail.com or create an issue in this repository.**

🚀 Happy Coding & Green Thumbs! 🌿
