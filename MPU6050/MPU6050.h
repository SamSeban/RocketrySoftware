#ifndef MPU6050_H
#define MPU6050_H

#include <Wire.h>

typedef struct {
  float roll;
  float pitch;
  float yaw;
  float accX;
  float accY;
  float accZ;
} MPUSensorData;

extern MPUSensorData sensorData;

void initializeMPU6050();
void readMPU6050Data(void (*dataCallback)(MPUSensorData));

#endif
