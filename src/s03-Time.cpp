#include <s23050/Time.h>
#include <sstream>
#include <iostream>

s23050::Time::Time(int h, int m, int s)
    : hour {std::move(h)}
    , minute {std::move(m)}
    , second {std::move(s)}
{}
s23050::Time_day::Time_day(std::string const m, std::string const d, std::string const e, std::string const n)
    : morning {std::move(m)}
    , day {std::move(d)}
    , evening {std::move(e)}
    , night {std::move(n)}
{}

auto s23050::Time::to_string() const -> std::string
{
    auto out= std::ostringstream{};
    out << hour << ":" << minute << ":" << second;
    return out.str();
}
auto s23050::Time::next_hour() const -> void
{
    ++hour;
    if(hour > 23)
    {
        hour = 00;
    }
    time.next_hour();
    auto out= std::ostringstream{};
    out << hour << ":" << minute << ":" << second;
    return out.str();
}
auto s23050::Time::next_minute() const -> void
{
    ++minute;
    if(minute > 59)
    {
        minute = 00;
        hour = 00;
    }
    time.next_minute();
    auto out= std::ostringstream{};
    out << hour << ":" << minute << ":" << second;
    return out.str();
}
auto s23050::Time::next_second() const -> void
{
    ++second;
    if(second > 59)
    {
        second = 00;
        minute = 00;
        hour = 00;
    }
    time.next_second();
    auto out= std::ostringstream{};
    out << hour << ":" << minute << ":" << second;
    return out.str();
}

auto s23050::Time::time_of_day() -> std::string
{
    if(hour < 10 && hour > 5)
    {
        auto out = std::ostringstream{};
        out << morning;
      
    }
    else if(hour < 18 && hour > 10)
    {
        auto out = std::ostringstream{};
        out << day;
    }
    else if(hour < 21 && hour > 18)
    {
        auto out = std::ostringstream{};
        out << evening;
    }
    else if(hour < 5 && hour > 21)
    {
        auto out = std::ostringstream{};
        out << night;
    }

    return out.str();
}
auto s23050::Time::to_string_1() const -> std::string
{
    auto out= std::ostringstream{};
    out << Time.Time_of_day;
    return out.str();
}

auto main() ->int
{
    auto time = s23050::Time{ 23, 59, 59 };
    std::cout << Time.to_string() << "\n";
    std::cout << s23050::to_string1(Time.Time_of_day()) << "\n";
    return 0;
    
}