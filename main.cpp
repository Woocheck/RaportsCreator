#include <iostream>
#include <filesystem>
#include <vector>
#include<algorithm>

#include "./timer/raportsTimer.h"
#include "./queue/sensorsRecordsQueue.h"

std::vector<SingleMeasurment> makeTestList( int numberElements );


int main()
{
    std::vector<SingleMeasurment> testList {};
    RaportsTimer first {};
    first.setTime();
    testList = makeTestList( 100 );
    RaportsTimer second {};
    second.setTime();

    SingleRecord record( 5, testList );
    
}

std::vector<SingleMeasurment> makeTestList( int numberElements )
{
    std::vector< int > keys { 1, 2, 3, 4, 5 };

    std::vector<SingleMeasurment> list{};
    for( auto i{0}; i < numberElements; i++ )
    {
        std::for_each( keys.begin(), keys.end(),
            [ &list ](int i)
            {
                RaportsTimer time {};
                time.setTime();

                SingleMeasurment measurment;
                measurment.sensorKeyNumber = i;
                measurment.measurementDate = time;
                measurment.measurmentValue = std::rand()%100000000; 
                list.push_back( measurment );       
            });
    }
};
