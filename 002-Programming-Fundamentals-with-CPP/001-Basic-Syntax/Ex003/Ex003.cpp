#include <iostream>
#include <array>

int main()
{
    const std::array<std::string, 12> months = {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November",
        "December"
    };

    int month_number;
    std::cin >> month_number;

    if (month_number >= 1 && month_number <= 12)
    {
        std::cout << months[month_number - 1];
    }
    else
    {
        std::cout << "Error!";
    }

    return 0;
}
