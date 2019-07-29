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
    std::map< int, SingleMeasurment > setOfMeasurments {};
    int numberOfMeasurmentPoints {};
    SingleMeasurment& measurmentsList;
    std::time_t dateOfRecord {};
    std::tm localDateOfRecord{};

    std::string singleRecord;

    public:
        SingleRecord( int points, SingleMeasurment& list ):
            numberOfMeasurmentPoints( points ),
            measurmentsList( list ) 
            {
                localDateOfRecord = *std::localtime( &dateOfRecord );
                localDateOfRecord.tm_sec = 0;
            };

        void setRecordDate(const std::time_t& );
        bool isMeasurmentHaveCorrectDate( const SingleMeasurment& measurment );
        bool isSetOfMeasurmentsCompleted();
        void getSingleMeasurment( const SingleMeasurment& );
        void makeSingleRecord( const std::time_t& );
        std::string getRecord( const std::time_t& );
        

};
#endif 
