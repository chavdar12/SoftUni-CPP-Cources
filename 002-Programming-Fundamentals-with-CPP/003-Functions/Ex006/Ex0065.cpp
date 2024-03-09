#include <iostream>
#include <cmath>

double math_power(const double base, const int exponent)
{
    return pow(base, exponent);
}

int main()
{
    double base;
    int exponent;
    std::cin >> base >> exponent;

    const double result = math_power(base, exponent);
    std::cout << result;

    return 0;
}
