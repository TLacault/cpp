#include "project.hpp"

void display_memory(Window *window)
{
    std::string TOTAL_MEM = "Total Memory";
    std::string USED_MEM = "Used Memory";
    std::string TOTAL_SWAP = "Total Swap";
    std::string USED_SWAP = "Used Swap";
    std::string total_mem = std::to_string(window->memory._totalMemory) + " " + window->memory._totalMemUnit;
    std::string used_mem = std::to_string(window->memory._usedMemory) + " " + window->memory._usedMemUnit;
    std::string total_swap = std::to_string(window->memory._totalSwap) + " " + window->memory._totalSwapUnit;
    std::string used_swap = std::to_string(window->memory._usedSwap) + " " + window->memory._usedSwapUnit;
    int pos_x = (COLS / 2 + COLS / 4 / 2);
    int pos_y = (LINES / 2 / 13);

    if (window->_memory_state == true) {
        mvprintw(pos_y * 2 + LINES / 2, pos_x - TOTAL_MEM.length() / 2, "%s", TOTAL_MEM.c_str());
        mvprintw(pos_y * 3 + LINES / 2, pos_x - total_mem.length() / 2, "%s", total_mem.c_str());
        mvprintw(pos_y * 5 + LINES / 2, pos_x - USED_MEM.length() / 2, "%s", USED_MEM.c_str());
        mvprintw(pos_y * 6 + LINES / 2, pos_x - used_mem.length() / 2, "%s", used_mem.c_str());
        mvprintw(pos_y * 8 + LINES / 2, pos_x - TOTAL_SWAP.length() / 2, "%s", TOTAL_SWAP.c_str());
        mvprintw(pos_y * 9 + LINES / 2, pos_x - total_swap.length() / 2, "%s", total_swap.c_str());
        mvprintw(pos_y * 11 + LINES / 2, pos_x - USED_SWAP.length() / 2, "%s", USED_SWAP.c_str());
        mvprintw(pos_y * 12 + LINES / 2, pos_x - used_swap.length() / 2, "%s", used_swap.c_str());
    }
}