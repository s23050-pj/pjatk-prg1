#include <iostream>
#include <string>

auto main() -> int
{
    for (int i = 99; i > 0; --i)
    {
        std::cout << i << "bottles of beer on the wall, ";
        std::cout << i << "bottles of beer.\nTake one down, pass it around, " << std::endl;
    }
    std::cout << "No more bottles of beer on the wall, " << std::endl << "no more bottles of beer. Go to the store and buy some more";

    return 0;
}