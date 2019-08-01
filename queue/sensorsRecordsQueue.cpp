#include <string>
#include <vector>
#include <chrono>

#include "./sensorsRecordsQueue.h"
#include "../timer/raportsTimer.h"


void SingleRecord::setRecordDate(const std::chrono::system_clock::time_point& date )
{
    dateOfRecord = date;
};
bool SingleRecord::isMeasurmentHaveCorrectDate( const SingleMeasurment& measurment )
{
    
};
bool SingleRecord::isSetOfMeasurmentsCompleted()
{

};
void SingleRecord::getSingleMeasurment( const SingleMeasurment& )
{

};
void SingleRecord::makeSingleRecord( const std::time_t& )
{

};
std::string SingleRecord::getRecord( const std::time_t& )
{

};