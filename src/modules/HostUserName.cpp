/*
** EPITECH PROJECT, 2022
** RUSH 03
** File description:
** structure
*/

#include "project.hpp"

HostUserName::HostUserName()
{
    this->UpdateHostUserName();
}

HostUserName::~HostUserName() = default;

void HostUserName::UpdateHostUserName() {
    uid_t uid = geteuid();
    struct passwd *user_data = getpwuid(uid);
    char buffer[256] = "";

    if (!user_data)
        throw "An error occurs when try to get User data!";
    else if (gethostname(buffer, sizeof(buffer)) == -1)
        throw "An error occurs when try to get hostname!";
    else {
        this->_hostname = buffer;
        this->_username = user_data->pw_name;
    }
}
