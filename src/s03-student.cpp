#include <iostream>
#include <sstream>
#include <s23050/student.h>

s23050::Student::Student(std::string n, std::string sn, int idx, int vt, int vt, float gp)
    : name {std::move(n)}
    , surname {std::move(sn)}
    , index {std::move(idx)}
    , valid_term{std::move(vt)}
    , gpa {std::gp}
{}

auto s23050::Student::to_string() const -> std::string
{
    auto out= std::ostringstream{};
    out << name << surname << index << valid_term << gpa;
    return out.str();
}

auto main() ->int
{
    auto student = s23050::Student{"Wojciech","Knas",23050,1,3.0};
    std::cout << student.to_string() << "\n";
    return 0;
}