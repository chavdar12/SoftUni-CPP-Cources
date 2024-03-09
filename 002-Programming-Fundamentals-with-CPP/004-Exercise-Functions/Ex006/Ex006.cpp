#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string text;
    std::getline(std::cin, text);

    const int vowel_count = std::count_if(text.begin(), text.end(), [](const char c)
    {
        const char lower = std::tolower(c);
        return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
    });

    std::cout << vowel_count;

    return 0;
}
