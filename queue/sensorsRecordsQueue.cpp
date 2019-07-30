#include <string>
#include <vector>
#include <chrono>

#include "./sensorsRecordsQueue.h"
#include "../timer/raportsTimer.h"


void SingleRecord::setRecordDate(const std::time_t& date )
{
    dateOfRecord = date;
};
bool SingleRecord::isMeasurmentHaveCorrectDate( const SingleMeasurment& measurment )
{
    auto localMeasurment = *std::localtime( &measurment );
    localMeasurment.tm_sec = 0;
    auto m = 
    
    if(  )
};
bool SingleRecord::isSetOfMeasurmentsCompleted();
void SingleRecord::getSingleMeasurment( const SingleMeasurment& );
void SingleRecord::makeSingleRecord( const std::time_t& );
std::string SingleRecord::getRecord( const std::time_t& );