#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int sum = 0;
    int current = 1;

    for (int i = 0; i < n; ++i)
    {
        std::cout << current << '\n';
        sum += current;
        current += 2;
    }

    std::cout << "Sum: " << sum << '\n';

    return 0;
}
