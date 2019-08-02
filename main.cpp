#include <iostream>
#include <filesystem>
#include <vector>
#include<algorithm>

#include "./timer/raportsTimer.h"
#include "./testList/testList.h"
#include "./queue/sensorsRecordsQueue.h"




int main()
{
    const int testListSize { 100 };
    const int measuringPointsNumber { 5 };

    TestList testList( testListSize, measuringPointsNumber );

    auto list = testList.getList();
    std::for_each( std::begin( list ), std::end( list ), []( auto line )
    {
        std::cout << line.getString() << "\n";
    });
    
}

