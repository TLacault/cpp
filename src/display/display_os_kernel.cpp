#include "project.hpp"

void display_os_kernel(Window *window)
{
    std::string OS = "Operating System Name";
    std::string KERNEL = "Kernel Version";
    std::string os_name = window->os_kernel._sysName;
    std::string kernel_ver = window->os_kernel._kernelVersion;
    int pos_x = (COLS / 4 * 3 + COLS / 4 / 2);
    int pos_y = (LINES / 2 / 10);

    if (window->_os_kernel_state == true) {
        mvprintw(pos_y * 2, pos_x - OS.length() / 2, "%s", OS.c_str());
        mvprintw(pos_y * 3, pos_x - os_name.length() / 2, "%s", os_name.c_str());
        mvprintw(pos_y * 7, pos_x - KERNEL.length() / 2, "%s", KERNEL.c_str());
        mvprintw(pos_y * 8, pos_x - kernel_ver.length() / 2, "%s", kernel_ver.c_str());
    }
}