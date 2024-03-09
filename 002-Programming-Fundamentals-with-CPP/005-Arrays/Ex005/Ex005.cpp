#include <iostream>
#include <vector>

int main()
{
    int size;
    std::cin >> size;

    std::vector<int> array(size);

    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }

    int sum_even = 0;
    int sum_odd = 0;

    for (int i = 0; i < size; ++i)
    {
        if (array[i] % 2 == 0)
        {
            sum_even += array[i];
        }
        else
        {
            sum_odd += array[i];
        }
    }

    const int difference = sum_even - sum_odd;

    std::cout << difference << '\n';

    return 0;
}
