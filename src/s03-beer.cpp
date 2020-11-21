#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    auto liczba = std::stoi(argv[1]);
    for (liczba; liczba > 0; --liczba)
    {
        std::cout << liczba << "bottles of beer on the wall, ";
        std::cout << liczba << "bottles of beer.\nTake one down, pass it around, " << std::endl;
    }
    std::cout << "No more bottles of beer on the wall, " << std::endl << "no more bottles of beer. Go to the store and buy some more";

    return 0;
}