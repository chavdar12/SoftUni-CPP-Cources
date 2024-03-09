#include <iostream>
#include <limits>

int main()
{
    int n;
    std::cin >> n;

    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();

    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;

        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
    }

    std::cout << min << " " << max << '\n';

    return 0;
}
