
#ifndef __CIRCULAR_BUFFER__
#define __CIRCULAR_BUFFER__

#include <iostream>
#include <sstream>

template<typename T, std::size_t N>
struct RecordsBuffer 
{
    template<typename T1, std::size_t N1>

    CircularBuffer() = default;
    CircularBuffer(const std::initializer_list<T> &list) 
    {
       if(list.size()!=N)
         throw std::range_error("");
      std::copy_n(list.begin(),N,_data.begin());
      cursor=N;    
    }

    const T &operator[](std::size_t index) const 
    {
       return _data[index];
    }

    void push(const T &t) 
    {
       if(cursor>=N)
       {
          cursor=0;
          haveMaxSize=true;
       }
       _data[cursor]=t;
       cursor++;
    }

    int size() 
    {
       if(haveMaxSize)
       {
          return N;
       }
       else
       {
          return cursor;
       }
    }

private:
    std::array<T, N> _data;
    std::size_t cursor {0};
    bool haveMaxSize {false};
};

#endif