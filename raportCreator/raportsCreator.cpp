#include "./raprtsCreator.h"

bool RaportsCreator::isDaylyRaportCreated( std::time_t time )
{

};
bool RaportsCreator::isRaportsTemplatesCreated()
{

};
bool RaportsCreator::isDirectoryCreated( std::string dirName )
{
    return std::filesystem::exists( dirName );
};