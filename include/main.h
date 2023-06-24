#ifndef MAIN_H
#define MAIN_H

#include "../MMC5603/MMC5603.h"
#include "../MPU6050/MPU6050.h"
#include "../MPL3115A2/MPL3115A2.h"

void mainFunction();
void MMCdataCallback(MMCSensorData data);
void MPUdataCallback(MPUSensorData data);
void MPLdataCallback(MPLSensorData data);

#endif