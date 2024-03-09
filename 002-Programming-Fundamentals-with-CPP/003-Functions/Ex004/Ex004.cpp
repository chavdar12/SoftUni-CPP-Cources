#include <iostream>

void print_triangle(const int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout << j;
            if (j < i)
            {
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }

    for (int i = n - 1; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout << j;
            if (j < i)
            {
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }
}

int main()
{
    int n;
    std::cin >> n;

    print_triangle(n);

    return 0;
}
