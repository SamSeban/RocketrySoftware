#ifndef MPL3115A2_H
#define MPL3115A2_H

#include "../include/Adafruit_MPL3115A2/Adafruit_MPL3115A2.h"

typedef struct {
    float temp;
    float pressure;
    float altitude;
} MPLSensorData;

extern Adafruit_MPL3115A2 baro;
extern MPLSensorData sensorData;

void initializeMPL3115A2();
void readMPL3115A2Data(void (*dataCallback)(MPLSensorData));

#endif //MPL3115A2_H
