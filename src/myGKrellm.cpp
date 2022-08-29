#include "project.hpp"

int myGKrellm(Window *window)
{
    initscr();
    while (window->_input != 'Q' && window->_input != 'q') {
        clear();
        update_modules(window);
        module_management(window);
        display_modules(window);
        move(LINES - 1, COLS - 1);
        // mvprintw(LINES / 2, COLS / 2, "COLS : %d | LINES : %d", COLS, LINES);
        refresh();
        window->_input = getchar();
    }
    endwin();
    return 0;
}