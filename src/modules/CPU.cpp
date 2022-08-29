/*
** EPITECH PROJECT, 2022
** project
** File description:
** project
*/

#include "CPU.hpp"

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

void infoCPU::UpdateCPU() {
    std::ifstream file("/proc/cpuinfo");
    std::string line;

    if (!file.is_open())
        throw "Cpuinfo file not found!";
    else  {
        while(std::getline(file, line)) {
            if (line.starts_with("model name"))
                _cpuModel = line.substr(line.find_first_of(':') + 2);
            else if (line.starts_with("cpu MHz"))
                _cpuFrequency = (std::atoi(line.substr(line.find_first_of(':') + 2).c_str())) / 1000;
            else if (line.starts_with("cpu cores"))
                _coreNumbers = my_getnbr(line.substr(line.find_first_of(':') + 1).c_str());
        }
    }
}

infoCPU::infoCPU() {
    this->UpdateCPU();
}

infoCPU::~infoCPU() = default;
