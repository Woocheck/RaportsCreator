#include <iostream>
#include <filesystem>
#include <vector>
#include<algorithm>

#include "./timer/raportsTimer.h"
#include "./queue/sensorsRecordsQueue.h"




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

