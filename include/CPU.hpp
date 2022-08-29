#ifndef CPU_HPP
#define CPU_HPP

#include <iostream>
#include <stdbool.h>
#include <string.h>
#include <cstddef>
#include <fstream>
#include <sstream>

class infoCPU {
    public:
        infoCPU();
        ~infoCPU();
        void UpdateCPU();

    public:
        std::string _cpuModel;
        double _cpuFrequency;
        int _coreNumbers;
};

#endif //CPU_HPP
