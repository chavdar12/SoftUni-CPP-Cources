#include <iostream>
#include <string>

int main()
{
    std::string country;
    std::cin >> country;

    if (country == "England" || country == "USA")
    {
        std::cout << "English";
    }
    else if (country == "Spain" || country == "Argentina" || country == "Mexico")
    {
        std::cout << "Spanish";
    }
    else
    {
        std::cout << "unknown";
    }

    return 0;
}
