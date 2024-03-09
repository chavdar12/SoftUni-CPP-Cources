#include <iostream>

int main()
{
    int size;
    std::cin >> size;

    int sum = 0;
    int number;

    for (int i = 0; i < size; ++i)
    {
        std::cin >> number;
        if (number % 2 == 0)
        {
            sum += number;
        }
    }

    std::cout << sum << '\n';

    return 0;
}
