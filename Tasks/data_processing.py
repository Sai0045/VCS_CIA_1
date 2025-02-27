import pandas as pd
import matplotlib.pyplot as plt

# Sample sensor data
data = {
    "Temperature (C)": [22, 23, 24, 25, 24],
    "Humidity (%)": [60, 58, 55, 57, 56],
    "Soil Moisture": [300, 290, 280, 270, 260]
}

df = pd.DataFrame(data)

# Plotting sensor data
plt.figure(figsize=(10,5))
plt.plot(df["Temperature (C)"], label="Temperature")
plt.plot(df["Humidity (%)"], label="Humidity")
plt.plot(df["Soil Moisture"], label="Soil Moisture")
plt.legend()
plt.title("Plant Sensor Data")
plt.xlabel("Time")
plt.ylabel("Values")
plt.show()
