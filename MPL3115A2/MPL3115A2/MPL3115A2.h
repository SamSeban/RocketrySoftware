#ifndef MPL3115A2_MPL3115A2_H
#define MPL3115A2_MPL3115A2_H

#include <Wire.h>
#include <Adafruit_MPL3115A2.h>

typedef struct {
    float temp;
    float pressure;
    float Altitude;
} MPL_data;

extern MPL_data my_data;
extern Adafruit_MPL3115A2 baro;

void initializeMPL();
void readMPLData(void (*dataCallback)(MPL_data));

#endif //MPL3115A2_MPL3115A2_H
