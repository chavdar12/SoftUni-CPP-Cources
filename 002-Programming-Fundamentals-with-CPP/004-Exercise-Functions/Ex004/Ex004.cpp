#include <iostream>
#include <string>

std::string convert(const int num)
{
    const std::string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const std::string teens[] = {
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
    const std::string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (num < 10)
    {
        return ones[num];
    }
    if (num < 20)
    {
        return teens[num - 10];
    }
    if (num < 100)
    {
        return tens[num / 10] + (num % 10 != 0 ? " " + ones[num % 10] : "");
    }
    return convert(num / 1000) + (num % 1000 != 0 ? " " + convert(num % 1000) : "");
}

int main()
{
    int number;
    std::cin >> number;

    if (number == 0)
    {
        std::cout << "zero";
    }
    else
    {
        std::cout << convert(number);
    }

    return 0;
}
