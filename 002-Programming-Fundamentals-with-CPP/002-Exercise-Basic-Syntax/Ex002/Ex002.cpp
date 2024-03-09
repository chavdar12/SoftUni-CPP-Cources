#include <iostream>

int main()
{
    double num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    if (num1 == 0 || num2 == 0 || num3 == 0)
    {
        std::cout << "+";
    }
    else
    {
        int negative_count = 0;
        if (num1 < 0) negative_count++;
        if (num2 < 0) negative_count++;
        if (num3 < 0) negative_count++;

        if (negative_count % 2 == 0)
        {
            std::cout << "+";
        }
        else
        {
            std::cout << "-";
        }
    }

    return 0;
}
