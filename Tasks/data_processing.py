import pandas as pd
import matplotlib.pyplot as plt

# Sample sensor data
data = {

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
