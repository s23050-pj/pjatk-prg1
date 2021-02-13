#include <s23050/student.h>
#include <sstream>
#include <iostream>


s23050::Time::Time(size_t h, size_t m, size_t s)
    : hour{ std::move(h) },
    minute{ std::move(m) },
    second{ std::move(s) }
{}


auto s23050::Time::to_string() -> void
{
    while(hour<60)
    {
        system("cls");
        next_second(); 
        if (hour < 10) {
            std::cout << "0";
        }
            std::cout << hour << ":";
        if (minute < 10) {
            std::cout << "0";
        } 
            std::cout << minute << ":";

        if (second < 10) {
            std::cout << "0";
        }
            std::cout << second << std::endl;
        time_of_day();
       
    }
}


auto s23050::Time::next_hour() -> void
{
    ++hour;
    if (hour > 23) {
        hour = 0;
        next_second();
    }
   
   
}

auto s23050::Time::next_minute() -> void
{
    ++minute;
    if (minute > 59) {
        minute = 0;
        next_hour();
    }
   
}

auto s23050::Time::next_second() -> void
{
    ++second;
    if (second > 60) {
        second = 0;
        next_minute();
  
    }
 
}

auto s23050::Time::time_of_day() -> void
{
    
    if (hour < 10 && hour >= 5) {
       
        std::cout << "morning";
    

    }
    else if (hour < 18 && hour>=10) {
       
        std::cout << "The day";
       
    }
    else if (hour < 21 && hour>=18) {
      
        std::cout << "evening";
        
    }
    else if (hour < 5 || hour>=21) {
      
        std::cout << "night";
        
    }
   
}


auto main() -> int
{
    s23050::Time time; 
    time.to_string();
    return 0;
}