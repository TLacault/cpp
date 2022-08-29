#include "project.hpp"

void draw_framework(void)
{
    mvprintw(0, 0, "+");
    for (int a = 1; a < COLS; a++) {
        mvprintw(0, a, "-");
    }
    mvprintw(0, COLS - 1, "+");

    for (int b = 1; b < LINES - 1; b++) {
        mvprintw(b, 0, "|");
        mvprintw(b, COLS / 2, "|");
        mvprintw(b, COLS / 4 * 3 + 1, "|");
        mvprintw(b, COLS - 1, "|");
    }

    mvprintw(LINES - 1, 0, "+");
    for (int f = 1; f < COLS; f++) {
        mvprintw(LINES - 1, f, "-");
    }
    mvprintw(LINES - 1, COLS - 1, "+");
}

void draw_middle_div()
{
    for (int i = 1; i < COLS - 1; i++) {
        mvprintw(LINES / 2, i, "-");
    }
}

void draw_bottom_div()
{
    for (int i = LINES / 2; i < LINES - 1; i++) {
        mvprintw(i, COLS / 4, "|");
    }
}

void display_ui(void)
{
    draw_framework();
    draw_bottom_div();
    draw_middle_div();
}