#ifndef _DATE_TIME_HPP_
#define _DATE_TIME_HPP_

#include <iostream>
#include <stdbool.h>
#include <string.h>
#include <cstddef>
#include <fstream>
#include <sstream>
#include <ctime>

class DateTime {
    public:
        DateTime();
        ~DateTime();
        void UpdateCalendar();

    public:
        std::tm *_calendar;
};

#endif /* !_DATE_TIME_HPP_ */
