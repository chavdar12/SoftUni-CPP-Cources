#include <iomanip>
#include <iostream>

unsigned long long factorial(const int n)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;

    const unsigned long long fact1 = factorial(num1);
    const unsigned long long fact2 = factorial(num2);

    const double result = static_cast<double>(fact1) / fact2;
    std::cout << std::fixed << std::setprecision(2) << result;

    return 0;
}
