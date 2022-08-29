#ifndef _HOST_USER_NAME_HPP_
#define _HOST_USER_NAME_HPP_

#include <iostream>
#include <stdbool.h>
#include <string.h>
#include <cstddef>
#include <fstream>
#include <sstream>
#include <unistd.h>
#include <pwd.h>

class HostUserName {
    public:
        HostUserName();
        ~HostUserName();
        void UpdateHostUserName();

        std::string _hostname;
        std::string _username;
};

#endif /* !_HOST_USER_NAME_HPP_ */
