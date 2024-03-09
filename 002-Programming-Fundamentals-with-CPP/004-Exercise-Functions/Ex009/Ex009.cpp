#include <iostream>
#include <string>

int max(const int a, const int b)
{
    return (a > b) ? a : b;
}

char max(const char a, const char b)
{
    return (a > b) ? a : b;
}

std::string max(const std::string& a, const std::string& b)
{
    return (a > b) ? a : b;
}

int main()
{
    std::string type;
    std::cin >> type;

    if (type == "int")
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << max(a, b);
    }
    else if (type == "char")
    {
        char a, b;
        std::cin >> a >> b;
        std::cout << max(a, b);
    }
    else if (type == "string")
    {
        std::string a, b;
        std::cin >> a >> b;
        std::cout << max(a, b);
    }
    else
    {
        std::cout << "Invalid type" << '\n';
    }

    return 0;
}
