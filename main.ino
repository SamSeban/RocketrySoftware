#include "MMC5603/MMC5603.h"

void dataReceivedCallback(SensorData data) {
  // Process the received sensor data here MMC5603
  // You can access the X, Y, Z, and Temp values using data.x, data.y, data.z, data.temp
}

void mainFunction() {
  initializeMMC56x3();

  while (1) {
    readMMC56x3Data(dataReceivedCallback);
  }
}
