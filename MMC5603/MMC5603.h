#ifndef MMC5603_H
#define MMC5603_H

#include <Adafruit_MMC56x3.h>

typedef struct {
  float x;
  float y;
  float z;
  float temp;
} SensorData;

extern Adafruit_MMC5603 mmc;
extern SensorData sensorData;

void initializeMMC56x3(void);
void readMMC56x3Data(void (*dataCallback)(SensorData));

#endif
