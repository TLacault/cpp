#include "project.hpp"

void display_host_user_name(Window *window)
{
    std::string HOST_NAME = "Host Name";
    std::string USER_NAME = "User Name";
    std::string host_name = window->host_user_name._hostname;
    std::string user_name = window->host_user_name._username;
    int pos_x = (COLS / 2 + COLS / 4 / 2);
    int pos_y = (LINES / 2 / 10);

    if (window->_host_user_name_state == true) {
        mvprintw(pos_y * 2, pos_x - HOST_NAME.length() / 2, "%s", HOST_NAME.c_str());
        mvprintw(pos_y * 3, pos_x - host_name.length() / 2, "%s", host_name.c_str());
        mvprintw(pos_y * 7, pos_x - USER_NAME.length() / 2, "%s", USER_NAME.c_str());
        mvprintw(pos_y * 8, pos_x - user_name.length() / 2, "%s", user_name.c_str());
    }
}
