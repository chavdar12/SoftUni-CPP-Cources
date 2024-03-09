#include <iostream>
#include <string>
#include <algorithm>

int character_multiplier(const std::string& str1, const std::string& str2)
{
    int sum = 0;
    auto pair = std::mismatch(str1.begin(), str1.end(), str2.begin(), str2.end());

    std::for_each(str1.begin(), pair.first, [&](const char c1) { sum += c1 * *pair.second++; });
    std::for_each(pair.first, str1.end(), [&](const char c) { sum += c; });
    std::for_each(pair.second, str2.end(), [&](const char c) { sum += c; });

    return sum;
}

int main()
{
    std::string str1, str2;
    std::cin >> str1 >> str2;

    std::cout << character_multiplier(str1, str2) << '\n';

    return 0;
}
