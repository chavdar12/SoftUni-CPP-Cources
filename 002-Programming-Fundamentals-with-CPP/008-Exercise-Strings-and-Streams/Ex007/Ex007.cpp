#include <iostream>
#include <string>

std::string replace_all(std::string text, const std::string& find, const std::string& replace)
{
    size_t pos = 0;
    while ((pos = text.find(find, pos)) != std::string::npos)
    {
        text.replace(pos, find.length(), replace);
        pos += replace.length();
    }
    return text;
}

int main()
{
    std::string text, find, replace;
    std::getline(std::cin, text);
    std::getline(std::cin, find);
    std::getline(std::cin, replace);

    std::cout << replace_all(text, find, replace) << '\n';

    return 0;
}
