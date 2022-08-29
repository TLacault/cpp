#include "project.hpp"

void update_modules(Window *window)
{
    window->monitor_core.UpdateMonitorCore();
    window->os_kernel.UpdateOSKernel();
    window->host_user_name.UpdateHostUserName();
    window->date_time.UpdateCalendar();
    window->memory.UpdateMemory();
    window->cpu.UpdateCPU();
    // window->network.UpdateNetwork();
}