#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> array(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> array[i];
    }

    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += array[i];
    }
    const double average = sum / n;

    for (int i = 0; i < n; ++i)
    {
        if (array[i] >= average)
        {
            std::cout << array[i] << " ";
        }
    }

    return 0;
}
