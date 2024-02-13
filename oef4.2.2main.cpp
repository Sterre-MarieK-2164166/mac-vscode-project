#include "oef4.2.2.h"
#include <iostream>

int main()
{
    Date today{}; // define object

    today.set_day(13);
    today.set_month(4);
    today.set_year(2024);

    std::cout << "Printing date...\n";
    std::cout << today.get_day() << "-";
    std::cout << today.get_month() << "-";
    std::cout << today.get_year();

    return 0;
}
