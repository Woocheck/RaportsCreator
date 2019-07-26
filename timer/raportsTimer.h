#ifndef __RAPORTS_TIMER_H__
#define __RAPORTS_TIMER_H__

#include <ctime>

class RaportsTimer
{
    std::time_t time {};

    public:
        RaportsTimer(){};

        void setTime()
        {
            std::localtime( &time );
        }

        std::time_t getTime()
        {
            setTime();
            return time;
        }
};

#endif
