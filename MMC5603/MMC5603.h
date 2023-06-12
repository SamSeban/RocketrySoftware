#ifndef MMC5603_H
#define MMC5603_H

#include <Adafruit_MMC56x3.h>

typedef struct {
  float x;
  float y;
  float z;
  float temp;
} MMCSensorData;

extern Adafruit_MMC5603 mmc;
extern MMCSensorData sensorData;

void initializeMMC56x3(void);
void readMMC56x3Data(void (*dataCallback)(MMCSensorData));

#endif
