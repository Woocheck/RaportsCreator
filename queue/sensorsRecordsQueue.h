#ifndef __SENSORS_RECORDS_QUEUE__
#define __SENSORS_RECORDS_QUEUE__
 
#include <string>
#include <vector>
#include <chrono>

#include "../timer/raportsTimer.h"

struct SingleMeasurment
{
    int sensorKeyNumber {};
    RaportsTimer measurementDate;
    float measurmentValue;
};

class SingleRecord
{
    
    int numberOfMeasurmentPoints {};
    std::vector< SingleMeasurment > setOfMeasurments {};

    std::chrono::system_clock::time_point dateOfRecord {};
    std::string singleRecord;

    public:
        SingleRecord( int points, std::vector<SingleMeasurment>& list ):
            numberOfMeasurmentPoints( points ),
            setOfMeasurments( list ) {};

        void setRecordDate(const std::chrono::system_clock::time_point& );
        bool isMeasurmentHaveCorrectDate( const SingleMeasurment& measurment );
        bool isSetOfMeasurmentsCompleted();
        void getSingleMeasurment( const SingleMeasurment& );
        void makeSingleRecord( const std::time_t& );
        std::string getRecord( const std::time_t& );
        

};
#endif 
