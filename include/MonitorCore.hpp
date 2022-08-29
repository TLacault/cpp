#ifndef _MONITOR_CORE_HPP_
#define _MONITOR_CORE_HPP_

#define CPU 0
#define USER 1
#define NICE 2
#define SYSTEM 3
#define IDLE 4
#define IOWAIT 5
#define IRQ 6
#define SOFTIRQ 7
#define STEAL 8

#include <iostream>
#include <stdbool.h>
#include <string.h>
#include <cstddef>
#include <fstream>
#include <sstream>

class MonitorCore {
    public:
        MonitorCore();
        ~MonitorCore();
        void UpdateMonitorCore();

    public:
        std::string _coreList[256];
};

#endif /* !_MONITOR_CORE_HPP_ */
