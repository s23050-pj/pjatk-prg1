#include <iostream>
#include <array>
#include <vector>

auto main() -> int
{
    std::array<int, 8> tab;
    std::vector<int> tab2;

    for(auto a=0; a < 8; a++)
    {     
        tab2.push_back((a+1)*2);
        std::cout << tab2.at(a) << "\n";
    }

    return 0;
}