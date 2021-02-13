#include <iostream>
#include <array>
#include <vector>

auto main() -> int
{
    std::vector<int> tab;

    for(auto a=0; a < 10; a++)
    {     
        tab.push_back((a+1)*2);
        std::cout << tab.at(a) << "\n";
    }

    return 0;
}

// wypisać *, **, *** x10 razy