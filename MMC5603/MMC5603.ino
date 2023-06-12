#include "MMC5603.h"

Adafruit_MMC5603 mmc = Adafruit_MMC5603(12345);
MMCSensorData sensorData;

void initializeMMC56x3(void) {
  if (!mmc.begin(MMC56X3_DEFAULT_ADDRESS, &Wire)) {
    Serial.println("Ooops, no MMC5603 detected ... Check your wiring!");
    while (1)
      delay(10);
  }
  mmc.printSensorDetails();
}

void readMMC56x3Data(void (*dataCallback)(MMCSensorData)) {
  sensors_event_t event;
  mmc.getEvent(&event);

  sensorData.x = event.magnetic.x;
  sensorData.y = event.magnetic.y;
  sensorData.z = event.magnetic.z;
  sensorData.temp = mmc.readTemperature();

  dataCallback(sensorData);
}
