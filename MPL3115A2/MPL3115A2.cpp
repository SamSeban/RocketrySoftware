#include "MPL3115A2.h"

Adafruit_MPL3115A2 baro = Adafruit_MPL3115A2();
MPLSensorData sensorData;

void initializeMPL3115A2()
{
    if(!baro.begin())
    {
        Serial.println("Couldn't find MPL3115A2 sensor");
        return;
    }
}

void readMPL3115A2Data(void (*dataCallback)(MPLSensorData))
{
    sensorData.pressure = baro.getPressure()*100;
    sensorData.altitude = baro.getAltitude();
    sensorData.temp = baro.getTemperature();

    dataCallback(sensorData);
}