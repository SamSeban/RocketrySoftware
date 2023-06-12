#include "MMC5603/MMC5603.h"
#include "MPU6050/MPU6050.h"

void MMCdataCallback(MMCSensorData data) {
  // Process the received sensor data here MMC5603
  // You can access the X, Y, Z, and Temp values using data.x, data.y, data.z, data.temp
}

void MPUdataCallback(MPUSensorData data) {
  // Process the received sensor data here MPU6050
  // You can access the roll, pitch, yaw, AccX, AccY and AccZ values using data.roll, data.pitch, data.yaw, data.AccX, data.AccY, data.AccZ
}

void mainFunction() {
  initializeMMC56x3();
  initializeMPU6050();


  while (1) {
    readMMC56x3Data(MMCdataReceivedCallback);
    readMPU6050Data(MPUdataReceivedCallback);
  }
}
