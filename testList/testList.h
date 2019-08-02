#ifndef __TEST_LIST__
#define __TEST_LIST__
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <chrono>

#include "../timer/raportsTimer.h"

class SingleLine
{
    const int maxValue_ { 1000 };
    int numberMeasuringPoints_ { 0 };
    std::chrono::system_clock::time_point measuringDate_;
    std::vector<float> measuringValues_;
    
    public:
        SingleLine( int measuringPoints ):
            numberMeasuringPoints_( measuringPoints){
                makeSingleLine();
            };
        void makeSingleLine()
        {
            measuringDate_ = std::chrono::system_clock::now();
            for( auto i {0}; i < numberMeasuringPoints_; i++ )
            {
                measuringValues_.push_back( std::rand()%maxValue_ );
            }
        };
        std::chrono::system_clock::time_point getDate()
        {
            return measuringDate_;
        }

        std::vector<float> getValues()
        {
            return measuringValues_;
        }

        std::string getString()
        {
            std::string result;
            result = timePointAsString( measuringDate_);
            for( auto value : measuringValues_ )
            {
                result += " ";
                result += value ;
            }
            return result;
        }

        private:

        static std::string timePointAsString(const std::chrono::system_clock::time_point& timePoint ) 
        {
            std::time_t timePoint_t = std::chrono::system_clock::to_time_t( timePoint );
            std::string timePoint_string = std::ctime( &timePoint_t );
            timePoint_string.resize( timePoint_string.size()-1 );
            return timePoint_string;
        }
};
 
class testList
{
    int measuringPointsNumber_ {};
    int elementsNumber_ {};
    std::vector<SingleLine> list_ {};

    public:
        testList( int elnum, int pointsNum ):
        elementsNumber_( elnum ),
        measuringPointsNumber_( pointsNum ) 
        {
            generateList();
        };
    private:
        void generateList()
        {
            for( auto i{0}; i < elementsNumber_; i++ )
            {
                SingleLine line( measuringPointsNumber_ );
                list_.push_back( line );
            }
        };
    
};

#endif 
