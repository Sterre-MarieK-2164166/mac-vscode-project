#include "oef4.2.2.h"
#include <iostream>

int main()
{
    Date today{}; // define object
    int input{};

    std::cout << "Day: ";
    std::cin >> input;
    today.set_day(input);
    std::cout << "Month: ";
    std::cin >> input;
    today.set_month(input);
    std::cout << "Year: ";
    std::cin >> input;
    today.set_year(input);

    std::cout << "Printing date...\n";
    std::cout << today.get_day() << "-";
    std::cout << today.get_month() << "-";
    std::cout << today.get_year();

    return 0;
}
