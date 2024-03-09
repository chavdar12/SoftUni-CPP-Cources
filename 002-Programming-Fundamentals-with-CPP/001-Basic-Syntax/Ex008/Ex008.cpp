#include <iostream>
#include <cmath>

int main()
{
    int number;

    do
    {
        std::cin >> number;

        if (number % 2 != 0)
        {
            std::cout << "Please write an even number." << '\n';
        }
        else
        {
            std::cout << "The number is: " << std::abs(number) << '\n';
            break;
        }
    }
    while (true);

    return 0;
}
