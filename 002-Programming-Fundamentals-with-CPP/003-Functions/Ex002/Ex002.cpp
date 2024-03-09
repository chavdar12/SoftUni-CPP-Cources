#include <iostream>

void print_grade(const double grade)
{
    if (grade >= 2.00 && grade <= 2.99)
    {
        std::cout << "Fail";
    }
    else if (grade >= 3.00 && grade <= 3.49)
    {
        std::cout << "Poor";
    }
    else if (grade >= 3.50 && grade <= 4.49)
    {
        std::cout << "Good";
    }
    else if (grade >= 4.50 && grade <= 5.49)
    {
        std::cout << "Very good";
    }
    else if (grade >= 5.50 && grade <= 6.00)
    {
        std::cout << "Excellent";
    }
}

int main()
{
    double grade;
    std::cin >> grade;

    print_grade(grade);

    return 0;
}
