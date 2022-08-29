#include "project.hpp"

void module_management(Window *window)
{
    char c = window->_input;

    if (c == '&' || c == '1')
        (window->_monitor_core_state == false) ? window->_monitor_core_state = true : window->_monitor_core_state = false;
    else if (c == -87 || c == '2')
        (window->_host_user_name_state == false) ? window->_host_user_name_state = true : window->_host_user_name_state = false;
    else if (c == '"' || c == '3')
        (window->_os_kernel_state == false) ? window->_os_kernel_state = true : window->_os_kernel_state = false;
    else if (c == '\'' || c == '4')
        (window->_date_time_state == false) ? window->_date_time_state = true : window->_date_time_state = false;
    else if (c == '(' || c == '5')
        (window->_cpu_state == false) ? window->_cpu_state = true : window->_cpu_state = false;
    else if (c == '-' || c == '6')
        (window->_memory_state == false) ? window->_memory_state = true : window->_memory_state = false;
    else if (c == -88 || c == '7')
        (window->_network_state == false) ? window->_network_state = true : window->_network_state = false;
}