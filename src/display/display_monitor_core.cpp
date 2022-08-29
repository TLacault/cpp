#include "project.hpp"

int get_corelist_size(Window *window)
{
    int size = 0;

    while (window->monitor_core._coreList[size] != "") {
        size++;
    }
    return size;
}

void display_monitor_core(Window *window)
{
    std::string CPU_USAGE = "CPU Average";
    std::string cpu_usage = window->monitor_core._coreList[0];
    std::string DIV = "_ _ _ _ _ _ _ _ _ _";
    std::string core = window->monitor_core._coreList[1];

    int pos_x_CPU = (COLS / 4);

    int pos_x_core = (COLS / 8);
    int pos_y_core = 5;

    if (window->_monitor_core_state == true) {
        mvprintw(2, pos_x_CPU - CPU_USAGE.length() / 2, "%s", CPU_USAGE.c_str());
        mvprintw(3, pos_x_CPU - cpu_usage.length() / 2, "%s", cpu_usage.c_str());
        for (int i = 1; window->monitor_core._coreList[i] != ""; i++) {
            core = window->monitor_core._coreList[i];
            mvprintw(pos_y_core, pos_x_core - core.length() / 2, "%s", core.c_str());
            pos_y_core++;
            if (i == (get_corelist_size(window) / 2)) {
                pos_x_core += (COLS / 4);
                pos_y_core = 5;
            }
        }
    }
}