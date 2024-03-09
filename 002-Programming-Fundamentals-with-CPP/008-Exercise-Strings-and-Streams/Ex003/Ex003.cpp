#include <algorithm>
#include <iostream>
#include <string>

std::string remove_repeated_chars(const std::string& str)
{
    std::string result;
    std::unique_copy(str.begin(), str.end(), std::back_inserter(result),
                     [](const char a, const char b) { return a == b; });
    return result;
}

int main()
{
    std::string input;
    std::getline(std::cin, input);
    std::cout << remove_repeated_chars(input) << '\n';
    return 0;
}
