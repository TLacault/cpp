#include "project.hpp"

void display_cpu(Window *window)
{
    std::string NAME = "CPU Name";
    std::string FREQ = "CPU Frequency";
    std::string CORE = "Core Number";
    std::string cpu_name = window->cpu._cpuModel;
    std::string cpu_freq = std::to_string(window->cpu._cpuFrequency) + " Ghz";
    std::string core_number = std::to_string(window->cpu._coreNumbers);
    int pos_x = (COLS / 4 + COLS / 4 / 2);
    int pos_y = (LINES / 2 / 10);

    if (window->_cpu_state == true) {
        mvprintw(pos_y * 2 + LINES / 2, pos_x - NAME.length() / 2, "%s", NAME.c_str());
        mvprintw(pos_y * 3 + LINES / 2, pos_x - cpu_name.length() / 2, "%s", cpu_name.c_str());
        mvprintw(pos_y * 5 + LINES / 2, pos_x - FREQ.length() / 2, "%s", FREQ.c_str());
        mvprintw(pos_y * 6 + LINES / 2, pos_x - cpu_freq.length() / 2, "%s", cpu_freq.c_str());
        mvprintw(pos_y * 8 + LINES / 2, pos_x - CORE.length() / 2, "%s", CORE.c_str());
        mvprintw(pos_y * 9 + LINES / 2, pos_x - core_number.length() / 2, "%s", core_number.c_str());
    }
}