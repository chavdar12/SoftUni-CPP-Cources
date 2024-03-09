#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

std::string title_case(const std::string& text)
{
    std::string result = text;
    bool new_word = true;

    std::for_each(result.begin(), result.end(), [&](char& c)
    {
        if (std::isalpha(c))
        {
            c = new_word ? std::toupper(c) : c;
            new_word = !std::isalpha(c);
        }
    });

    return result;
}

int main()
{
    std::string text;
    std::getline(std::cin, text);

    std::cout << title_case(text) << '\n';

    return 0;
}
