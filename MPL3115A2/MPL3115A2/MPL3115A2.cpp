#include "MPL3115A2.h"



void initializeMPL()
{
    baro = Adafruit_MPL3115A2();
    if(!baro.begin())
    {
        Serial.println("Couldn't find sensor");
        return;
    }
    my_data.pressure = baro.getPressure();
    my_data.Altitude = baro.getAltitude();
    my_data.temp = baro.getTemperature();
}

void readMPLData(void (*dataCallback)(MPL_data))
{
    my_data.pressure = baro.getPressure()*100;
    my_data.Altitude = baro.getAltitude();
    my_data.temp = baro.getTemperature();

    dataCallback(my_data);
}