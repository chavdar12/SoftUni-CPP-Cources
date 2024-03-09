#include <iostream>
#include <cmath>

int main()
{
    int number;
    std::cin >> number;

    int even_sum = 0, odd_sum = 0;

    while (number != 0)
    {
        const int digit = abs(number % 10);
        (digit % 2 == 0 ? even_sum : odd_sum) += digit;
        number /= 10;
    }

    std::cout << even_sum * odd_sum;

    return 0;
}
