#include <iostream>
#include <string>

int main()
{
    std::string first, second;
    std::getline(std::cin, first);
    std::getline(std::cin, second);

    size_t pos;
    while ((pos = second.find(first)) != std::string::npos)
    {
        second.erase(pos, first.length());
    }

    std::cout << second;

    return 0;
}
