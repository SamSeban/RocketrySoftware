#include "main.h"

void MMCdataCallback(MMCSensorData data) {
  // Process the received sensor data here MMC5603
  // You can access the X, Y, Z, and Temp values using data.x, data.y, data.z, data.temp
}

void MPUdataCallback(MPUSensorData data) {
  // Process the received sensor data here MPU6050
  // You can access the roll, pitch, yaw, AccX, AccY and AccZ values using data.roll, data.pitch, data.yaw, data.AccX, data.AccY, data.AccZ
}

void MPLdataCallback(MPLSensorData data) {
  // Process the received sensor data here MPL3115A2
  // You can access the temp, altitude, pressure values using data.temp, data.altitude, data.pressure
}

void mainFunction() {
  initializeMMC56x3();
  initializeMPU6050();
  initializeMPL3115A2();

  while (1) {
    readMMC56x3Data(MMCdataCallback);
    readMPU6050Data(MPUdataCallback);
    readMPL3115A2Data(MPLdataCallback);
  }
}
