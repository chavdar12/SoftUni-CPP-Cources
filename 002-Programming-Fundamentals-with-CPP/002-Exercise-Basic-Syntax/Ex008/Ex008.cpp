#include <iostream>

int factorial(const int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}

bool is_strong(int num)
{
    int sum = 0;
    const int original_num = num;
    while (num > 0)
    {
        sum += factorial(num % 10);
        num /= 10;
    }
    return sum == original_num;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << (is_strong(n) ? "yes" : "no");
    return 0;
}
