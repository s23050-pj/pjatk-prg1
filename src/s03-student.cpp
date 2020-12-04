#include <23050/student.h>
#include <iostream>
#include <sstream>

s23050::Student::Student(
     std::string  n,
     std::string  sn,
    unsigned int idx,
    unsigned int vt,
    float gpa)
    : name{ std::move(n) },
    surname{ std::move(sn) },
    index{ std::move(idx) },
    valid_term{ std::move(vt) },
    gpa{ std::move(gpa) }
{}

auto s23050::Student::to_string() const -> std::string
{
    auto out = std::ostringstream{};
    out << name <<" "<<  surname <<" "<< index <<" "<< valid_term <<" "<< gpa;
    return out.str();
}

auto main() ->int
{
    auto student = s23050::Student{ "Wojciech","Knaś",23050,1,3,6784 };
    std::cout << student.to_string() << "\n";
    return 0;
}