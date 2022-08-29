/*
** EPITECH PROJECT, 2022
** RUSH 03
** File description:
** structure
*/

#include "project.hpp"

DateTime::DateTime()
{
    this->UpdateCalendar();
}

void DateTime::UpdateCalendar() {
    std::time_t currentTime = std::time(nullptr);

    if (!currentTime)
        throw "Error occurs when try to get current Time!";
    else if (!std::localtime(&currentTime))
        throw "Error occurs in time format getter!";
    else
        _calendar = std::localtime(&currentTime);
}

DateTime::~DateTime() = default;
