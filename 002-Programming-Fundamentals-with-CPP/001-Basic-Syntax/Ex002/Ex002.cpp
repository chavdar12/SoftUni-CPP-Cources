#include <iostream>

int main()
{
    double grade;
    std::cin >> grade;

    if (grade >= 3.00)
    {
        std::cout << "Passed!";
    }
    else
    {
        std::cout << "Failed!";
    }

    return 0;
}
