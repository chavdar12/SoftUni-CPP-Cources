#include <iostream>
#include <string>

std::string caesar_cipher(const std::string& text)
{
    std::string result = text;

    for (char& c : result)
    {
        if (isalpha(c))
        {
            c = (c - (isupper(c) ? 'A' : 'a') + 3) % 26 + (isupper(c) ? 'A' : 'a');
        }
    }

    return result;
}

int main()
{
    std::string text;
    std::getline(std::cin, text);

    std::cout << caesar_cipher(text) << '\n';

    return 0;
}
