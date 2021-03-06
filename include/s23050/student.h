#ifndef S23050_STUDENT_H
#define S23050_STUDENT_H
#include <string>

namespace s23050 {

    struct Student {
        std::string const name;
        std::string const surname;
        const unsigned int index;
        unsigned int valid_term;
        float gpa;

        Student(std::string);

        Student(std::string n, std::string sn,
        unsigned int idx, unsigned int vt, float gp);

        auto to_string() const -> std::string; //f.skladowa
    };
}

#endif