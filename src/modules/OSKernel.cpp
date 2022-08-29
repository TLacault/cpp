/*
** EPITECH PROJECT, 2022
** RUSH 03
** File description:
** structure
*/

#include "project.hpp"

OSKernel::OSKernel()
{
    this->UpdateOSKernel();
}

OSKernel::~OSKernel() = default;

void OSKernel::UpdateOSKernel() {
    struct utsname systemData = {};

    if (uname(&systemData) == -1)
        throw "An error occurs when getting system information!";
    else{
        _sysName = systemData.sysname;
        _kernelVersion = systemData.release;
    }
}
