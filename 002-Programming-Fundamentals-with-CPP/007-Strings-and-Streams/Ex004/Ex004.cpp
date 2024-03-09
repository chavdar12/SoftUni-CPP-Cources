#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string input;
    std::getline(std::cin, input);

    std::string digits, letters, others;

    for (const char ch : input)
    {
        if (isdigit(ch))
        {
            digits += ch;
        }
        else if (isalpha(ch))
        {
            letters += ch;
        }
        else
        {
            others += ch;
        }
    }

    std::cout << digits << '\n';
    std::cout << letters << '\n';
    std::cout << others << '\n';

    return 0;
}
