#include "project.hpp"

std::string create_date(std::tm *calendar)
{
    std::string date = std::to_string(calendar->tm_mday) + " " + std::to_string(calendar->tm_mon + 1) + " " + std::to_string(calendar->tm_year + 1900);
    return date;
}

std::string create_time(std::tm *calendar)
{
    std::string time = std::to_string(calendar->tm_hour) + " " + std::to_string(calendar->tm_min) + " " + std::to_string(calendar->tm_sec);
    return time;
}

void display_date_time(Window *window)
{
    std::string DATE = "Date";
    std::string TIME = "Time";
    std::string date = create_date(window->date_time._calendar);
    std::string time = create_time(window->date_time._calendar);
    int pos_x = (COLS / 4 / 2);
    int pos_y = (LINES / 2 / 10);

    if (window->_date_time_state == true) {
        mvprintw(pos_y * 2 + LINES / 2, pos_x - DATE.length() / 2, "%s", DATE.c_str());
        mvprintw(pos_y * 3 + LINES / 2, pos_x - date.length() / 2, "%s", date.c_str());
        mvprintw(pos_y * 7 + LINES / 2, pos_x - TIME.length() / 2, "%s", TIME.c_str());
        mvprintw(pos_y * 8 + LINES / 2, pos_x - time.length() / 2, "%s", time.c_str());
    }
}