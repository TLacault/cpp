#ifndef _PROJECT_HPP_
#define _PROJECT_HPP_

#include "Window.hpp"
#include "MonitorCore.hpp"
#include "HostUserName.hpp"
#include "OSKernel.hpp"
#include "DateTime.hpp"
#include "Memory.hpp"
#include "CPU.hpp"

#include <iostream>
#include <iomanip>
#include <stdbool.h>
#include <cstring>
#include <string.h>
#include <cstddef>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string_view>

#include <ncurses.h>
#include <curses.h>

int myGKrellm(Window *window);
void update_modules(Window* window);
void module_management(Window *window);
void get_args(Window *window, int ac, char **av);
void help_display();

void display_ui(void);
void display_modules(Window *window);
void display_monitor_core(Window* window);
void display_date_time(Window* window);
void display_host_user_name(Window* window);
void display_os_kernel(Window* window);
void display_cpu(Window *window);
void display_memory(Window *window);
void display_network(Window *window);

#endif /* !_PROJECT_HPP_ */
