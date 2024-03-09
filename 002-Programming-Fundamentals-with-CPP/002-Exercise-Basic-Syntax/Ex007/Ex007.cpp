#include <iostream>

int main()
{
    int start, end;
    std::cin >> start >> end;

    int sum = 0;
    for (int i = start; i <= end; ++i)
    {
        std::cout << i << " ";
        sum += i;
    }

    std::cout << '\n' << "Sum: " << sum << '\n';

    return 0;
}
