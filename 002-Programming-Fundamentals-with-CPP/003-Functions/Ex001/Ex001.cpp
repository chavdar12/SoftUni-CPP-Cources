#include <iostream>

void print_sign(const int number)
{
    if (number > 0)
    {
        std::cout << "The number " << number << " is positive." << '\n';
    }
    else if (number < 0)
    {
        std::cout << "The number " << number << " is negative." << '\n';
    }
    else
    {
        std::cout << "The number " << number << " is zero." << '\n';
    }
}

int main()
{
    print_sign(2);
    print_sign(-5);
    print_sign(0);

    return 0;
}
