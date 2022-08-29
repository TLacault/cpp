/*
** EPITECH PROJECT, 2022
** RUSH 03
** File description:
** get_args
*/

#include "project.hpp"

void help_display()
{
    std::cout << "Usage :\n" << std::endl;
    std::cout << "    ./MyGKrellm [Module] [On/Off 1/0 True/False]\n" << std::endl;
    std::cout << "Modules :\n" << std::endl;
    std::cout << "    --monitor_core" << std::endl;
    std::cout << "    --host_user" << std::endl;
    std::cout << "    --os_kernel" << std::endl;
    std::cout << "    --date_time" << std::endl;
    std::cout << "    --cpu" << std::endl;
    std::cout << "    --ram" << std::endl;
    std::cout << "    --network" << std::endl;
}

void get_args(Window *window, int ac, char **av)
{
    int i = 1;
    std::string tmp;
    std::string tmp2;

    if (ac < 3)
        return;
    if (ac % 2 == 0)
        return;
    while (i < ac) {
        tmp = av[i];
        tmp2 = av[i + 1];
        (tmp == "--monitor_core" && (tmp2 == "off" || tmp2 == "false" || tmp2 == "0")) ? window->_monitor_core_state = false : window->_monitor_core_state = true;
        (tmp == "--host_user" && (tmp2 == "off" || tmp2 == "false" || tmp2 == "0")) ? window->_host_user_name_state = false : window->_host_user_name_state = true;
        (tmp == "--os_kernel" && (tmp2 == "off" || tmp2 == "false" || tmp2 == "0")) ? window->_os_kernel_state = false : window->_os_kernel_state = true;
        (tmp == "--date_time" && (tmp2 == "off" || tmp2 == "false" || tmp2 == "0")) ? window->_date_time_state = false : window->_date_time_state = true;
        (tmp == "--cpu" && (tmp2 == "off" || tmp2 == "false" || tmp2 == "0")) ? window->_cpu_state = false : window->_cpu_state = true;
        (tmp == "--ram" && (tmp2 == "off" || tmp2 == "false" || tmp2 == "0")) ? window->_memory_state = false : window->_memory_state = true;
        (tmp == "--network" && (tmp2 == "off" || tmp2 == "false" || tmp2 == "0")) ? window->_network_state = false : window->_network_state = true;
        i += 2;
    }
}