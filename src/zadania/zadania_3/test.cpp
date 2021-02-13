#include <iostream>
#include <string.h>

auto main() -> int
{
    std::string slowo = "cos ";
    std::string *biere = &slowo;
    std::string tekst = "testowanie";
    std::string *wt = &tekst;
    memcpy(biere, wt, 4);
    std::cout << *biere;
    return 0;
}

