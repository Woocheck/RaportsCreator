
#ifndef __RAPORTS_CREATOR__
#define __RAPORTS_CREATOR__

#include <filesystem>
#include <string>
#include <ctime>
#include <map>

#include "./singleRaport.h"
#include "../timer/raportsTimer.h"


class RaportsCreator
{
    std::string headerFileTemplte { "raportheader.txt" };
    std::string settingsFile { "settings.txt" };  
    std::filesystem::path raportsDirectory;
    std::filesystem::path templateDirectory;
    std::map<RaportsTimer,std::vector
    std::vector<DaylyRaport> raports;
    public:
        RaportsCreator( const std::filesystem::path& dir, 
                        const std::filesystem::path& tmpdir ):
                        raportsDirectory( dir ),
                        templateDirectory( tmpdir )
                        {
                            if( !isDirectoryCreated( raportsDirectory ) )
                            {
                                std::filesystem::create_directory( raportsDirectory );
                            }
                        };
    private:
        std::filesystem::path prepareEmptyDaylyRaport( );
        bool isDaylyRaportCreated( std::time_t time );
        bool isRaportsTemplatesCreated();
        bool isDirectoryCreated( std::string dirName );
};

#endif 
