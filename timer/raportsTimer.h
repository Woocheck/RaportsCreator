#ifndef __RAPORTS_TIMER_H__
#define __RAPORTS_TIMER_H__

#include <ctime>

class RaportsTimer
{
    std::time_t time {};

    public:
        RaportsTimer() = default;

        void setTime()
        {
            std::time( & time );
        }
        std::time_t getTime()
        {
            return time;
        }
        std::tm getUtc()
        {
            return *std::gmtime( &time );
        }
        std::tm getLocal()
        {
            return *std::localtime( &time );
        }

        std::time_t getCurrentTime()
        {
            setTime();
            return time;
        }
        std::tm getCurrentUtc()
        {
            setTime();
            return *std::gmtime( &time );
        }
        std::tm getCurrentLocal()
        {
            setTime();
            return *std::localtime( &time );
        }
};

#endif
