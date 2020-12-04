#ifndef s23050_TIME_H
#define s23050_TIME_H
#include <string>

namespace s23050 {

    struct Time 
    {
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
        constexpr static size_t max_hour{23};
        constexpr static size_t max_minute{59};
        constexpr static size_t max_second{59};
        Time(std::string, size_t = max_hour, size_t = max_minute, size_t = max_second);

        auto to_string() const -> std::string;
        auto next_hour() -> void;
        auto next_minute() -> void;
        auto next_second() -> void;

        enum class Time_of_day
        {
        public:

        std::string const morning = {"morning"}
        std::string const day = {"day"}
        std::string const evening = {"evening"}
        std::string const night = {"night"}
        };

        Time_of_day(std::string);
        auto to_string_1() const -> std::string;
        auto time_of_day() const -> std::string;

    };
}

#endif