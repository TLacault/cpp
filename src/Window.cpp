#include "project.hpp"

Window::Window()
{
    MonitorCore new_monitor_core;
    this->monitor_core = new_monitor_core;
    this->_monitor_core_state = true;

    HostUserName new_host_user_name;
    this->host_user_name = new_host_user_name;
    this->_host_user_name_state = true;

    OSKernel new_os_kernel;
    this->os_kernel = new_os_kernel;
    this->_os_kernel_state = true;

    DateTime new_date_time;
    this->date_time = new_date_time;
    this->_date_time_state = true;

    infoCPU new_cpu;
    this->cpu = new_cpu;
    this->_cpu_state = true;

    Memory new_memory;
    this->memory = new_memory;
    this->_memory_state = true;

    // Network new_network;
    // this->network = new_network;
    // this->_network_state = true;

    this->_input = '0';
}

Window::~Window()
{
}
