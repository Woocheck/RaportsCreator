#ifndef __SENSORS_RECORDS_QUEUE__
#define __SENSORS_RECORDS_QUEUE__
 
#include <string>
#include <map>

#include "../timer/raportsTimer.h"

struct SingleMeasurment
{
    int sensorKeyNumber {};
    RaportsTimer measurementDate;
    float measurmentValue;
};

class SingleRecord
{
    std::map< int, SingleMeasurment > setOfMeasurments;

};
#endif 
