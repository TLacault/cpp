/*
** EPITECH PROJECT, 2022
** project
** File description:
** project
*/

#include "project.hpp"

static int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = (nb + (str[i] - 48));
        }
        else if (nb > 1 && (!(str[i] >= '0' && str[i] <= '9')))
            return (nb);
        i++;
    }
    return (nb);
}

void Memory::UpdateMemory() {
    std::ifstream file("/proc/meminfo");
    std::string line;
    long swapfree = 0;
    long swapcached = 0;

    if (!file.is_open())
        throw "Meminfo file not found";
    else {
        while (std::getline(file, line)) {
            memFind(line);
            if (line.starts_with("SwapTotal:"))
                _totalSwap = my_getnbr(line.c_str()) / 1024;
            else if (line.starts_with("SwapFree:"))
                swapfree = my_getnbr(line.c_str()) / 1024;
            else if (line.starts_with("SwapCached"))
                swapcached = my_getnbr(line.c_str()) / 1024;
        }
        _usedSwap = _totalSwap - (swapfree + swapcached);
        this->unitsConverter();
    }
}

void Memory::memFind(const std::string &line) {
    if (line.starts_with("MemTotal:"))
        _totalMemory = my_getnbr(line.c_str()) / 1024;
    else if (line.starts_with("MemAvailable:"))
        _usedMemory = _totalMemory - (my_getnbr(line.c_str()) / 1024);
}

void Memory::unitsConverter() {
    (_usedSwap >= 1000) ? _usedSwapUnit = "GB" : _usedSwapUnit = "MB";
    (_usedSwap >= 1000) ? _usedSwap /= 1024 : _usedSwap += 0;
    (_totalMemory >= 1000) ? _totalMemUnit = "GB" : _totalMemUnit = "MB";
    (_totalMemory >= 1000) ? _totalMemory /= 1024 : _totalMemory += 0;
    (_usedMemory >= 1000) ? _usedMemUnit = "GB" : _usedMemUnit = "MB";
    (_usedMemory >= 1000) ? _usedMemory /= 1024 : _usedMemory += 0;
    (_totalSwap >= 1000) ? _totalSwapUnit = "GB" : _totalSwapUnit = "MB";
    (_totalSwap >= 1000) ? _totalSwap /= 1024 : _totalSwap += 0;
}

Memory::Memory() {
    this->UpdateMemory();
}

Memory::~Memory() = default;
