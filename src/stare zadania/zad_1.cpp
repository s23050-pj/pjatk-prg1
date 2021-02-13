#include <iostream>

auto main() -> int
{
    auto const a = 7;
    std::cout << a << "\n";
    auto b = a;
    while(b > -2)
    {
        --b;
        std::cout << b << "\n";
    }
    return 0;
}


