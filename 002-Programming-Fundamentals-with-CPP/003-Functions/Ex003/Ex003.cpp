#include <iostream>

void smallest_of_three(const int num1, const int num2, const int num3)
{
    int smallest = num1;
    if (num2 < smallest)
    {
        smallest = num2;
    }
    if (num3 < smallest)
    {
        smallest = num3;
    }
    std::cout << smallest;
}

int main()
{
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    smallest_of_three(num1, num2, num3);

    return 0;
}
