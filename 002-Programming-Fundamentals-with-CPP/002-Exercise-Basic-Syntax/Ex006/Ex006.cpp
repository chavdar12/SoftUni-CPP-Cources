#include <iostream>

int gcd(int a, int b)
{
    while (b != 0)
    {
        const int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;

    const int result = gcd(num1, num2);
    std::cout << result << '\n';

    return 0;
}
