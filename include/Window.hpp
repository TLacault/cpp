#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#include "MonitorCore.hpp"
#include "HostUserName.hpp"
#include "OSKernel.hpp"
#include "DateTime.hpp"
#include "Memory.hpp"
#include "CPU.hpp"

#include <iostream>
#include <stdbool.h>
#include <string.h>
#include <cstddef>
#include <fstream>
#include <sstream>

class Window {
    public:
        Window();
        ~Window();

        //MODULE
        MonitorCore monitor_core;
        HostUserName host_user_name;
        OSKernel os_kernel;
        DateTime date_time;
        infoCPU cpu;
        Memory memory;
        // Network network;

    public:
        bool _monitor_core_state;
        bool _host_user_name_state;
        bool _os_kernel_state;
        bool _date_time_state;
        bool _cpu_state;
        bool _memory_state;
        bool _network_state;

        char _input;
};

#endif /* !_WINDOW_HPP_ */
