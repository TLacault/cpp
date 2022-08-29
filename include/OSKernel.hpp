#ifndef _OSKERNEL_HPP_
#define _OSKERNEL_HPP_

#include <iostream>
#include <stdbool.h>
#include <string.h>
#include <cstddef>
#include <fstream>
#include <sstream>
#include <sys/utsname.h>

class OSKernel {
    public:
        OSKernel();
        ~OSKernel();
        void UpdateOSKernel();

    public:
        std::string _sysName;
        std::string _kernelVersion;
};

#endif /* !_OSKERNEL_HPP_ */
