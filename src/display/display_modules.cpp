#include "project.hpp"

void display_modules(Window *window)
{
    display_ui();
    display_monitor_core(window);
    display_host_user_name(window);
    display_os_kernel(window);
    display_date_time(window);
    display_cpu(window);
    display_memory(window);
    display_network(window);
}