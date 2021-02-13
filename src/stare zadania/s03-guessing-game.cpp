#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

auto main() -> int
{
    srand(time(NULL));    
    auto liczba_losowa = (std::rand()%100);
    int liczba;    
	std::cout << "Podaj liczbe od 1 do 100:\n ";
	std::cin >> liczba;
    
    do
    {
        if(liczba > liczba_losowa)
        {
            std::cout << "Za duza liczba\n";
            std::cin >> liczba;
        }
        else if(liczba < liczba_losowa)
        {
            std::cout << "Za mala liczba\n";
            std::cin >> liczba;
        }
    }
    while(liczba!=liczba_losowa);
    std::cout << "Brawo zgadles liczbe: " << liczba_losowa << std::endl;
    return 0;

}