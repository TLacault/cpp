#ifndef _MEMORY_HPP_
#define _MEMORY_HPP_

#include <iostream>
#include <stdbool.h>
#include <string.h>
#include <cstddef>
#include <fstream>
#include <sstream>
#include <sys/sysinfo.h>

class Memory{
    public:
        Memory();
        ~Memory();
        void UpdateMemory();

    public:
        long double _totalMemory;
        std::string _totalMemUnit;
        long double _usedMemory;
        std::string _usedMemUnit;
        long double _totalSwap;
        std::string _totalSwapUnit;
        long double _usedSwap;
        std::string _usedSwapUnit;

    private:
        void memFind(const std::string &line);
        void unitsConverter();
};

#endif //_MEMORY_HPP_
