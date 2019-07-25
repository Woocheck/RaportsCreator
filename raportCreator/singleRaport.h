#ifndef __SINGLE_RAPORT_H__
#define __SINGLE_RAPORT_H__

#include <vector>
#include <string>
#include <filesystem>

#include "../timer/raportsTimer.h"

class DaylyRaport
{
    std::time_t roportsDate {};
    std::string raportHeader {};
    std::vector<std::string> raportRecords {};
   
    public:
        DaylyRaport(){};
        void prepareRaport( const std::filesystem::path& templateDirectory );
        void prepareHeader( const std::filesystem::path& templateDirectory );

};

#endif 
