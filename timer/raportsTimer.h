#ifndef __RAPORTS_TIMER_H__
#define __RAPORTS_TIMER_H__

#include <chrono>

class RaportsTimer
{
    std::chrono::system_clock::time_point time {};

    public:
        RaportsTimer() = default;

        void setTime()
        {
            time = std::chrono::system_clock::now();
        }
        
        std::chrono::system_clock::time_point getTime() const
        {
            return time;
        }

        std::chrono::system_clock::time_point getCurrentTime()
        {
            setTime();
            return time;
        }

        std::string getStringTime() const
        {
            std::time_t t = std::chrono::system_clock::to_time_t( time );
            return std::ctime( &t );
        }

        std::string getCurrentStringTime()
        {
            setTime();
            std::time_t t = std::chrono::system_clock::to_time_t( time );
            return std::ctime( &t );
        }
};

#endif
