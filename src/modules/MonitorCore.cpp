/*
** EPITECH PROJECT, 2022
** RUSH 03
** File description:
** structure
*/

#include "project.hpp"

MonitorCore::MonitorCore()
{
    this->UpdateMonitorCore();
}

MonitorCore::~MonitorCore() = default;

static void get_parsed_args(std::string line, std::string *tab){
    char *ctabline = new char[line.length() + 1];
    int i = 0;
    strcpy(ctabline, line.c_str());
    char *tokens = std::strtok(ctabline, " ");

    while (tokens) {
        tab[i++] = tokens;
        tokens = std::strtok(nullptr, " ");
    }
}

static void putCpuData(std::string *src, std::string *dest, size_t index){
    double total_idle = std::atoi(src[IDLE].c_str()) + std::atoi(src[IOWAIT].c_str());
    double nonIdle = std::atoi(src[USER].c_str()) + std::atoi(src[NICE].c_str())
            + std::atoi(src[SYSTEM].c_str()) + std::atoi(src[IRQ].c_str())
            + std::atoi(src[SOFTIRQ].c_str()) + std::atoi(src[STEAL].c_str());
    double total = total_idle + nonIdle;
    double pourcentage = 100 *((total - total_idle) / total);
    dest[index] = src[CPU] + ' ' + std::to_string(pourcentage) + '%';
}

void MonitorCore::UpdateMonitorCore() {
    std::ifstream file("/proc/stat");
    std::string line;
    std::string cpuValue[256];
    int i = 0;

    if (!file.is_open())
        throw "File /proc/stat not found!";
    else {
        while (std::getline(file, line)) {
            if (line.starts_with("cpu")) {
                get_parsed_args(line, cpuValue);
                putCpuData(cpuValue, _coreList, i++);
            }
        }
    }
}
