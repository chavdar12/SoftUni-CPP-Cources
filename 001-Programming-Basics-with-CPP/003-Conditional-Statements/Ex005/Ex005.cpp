#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    if (number < 100)
    {
        std::cout << "Less than 100" << '\n';
    }
    else if (number <= 200)
    {
        std::cout << "Between 100 and 200" << '\n';
    }
    else
    {
        std::cout << "Greater than 200" << '\n';
    }
}
