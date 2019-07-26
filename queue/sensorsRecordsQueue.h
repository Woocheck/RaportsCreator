#ifndef __SENSORS_RECORDS_QUEUE__
#define __SENSORS_RECORDS_QUEUE__
 
#include <string>

#include "../timer/raportsTimer.h"

struct resultsRecord
{
    int sensorKeyNumber {};
    RaportsTimer measurementDate;

};

#endif 
