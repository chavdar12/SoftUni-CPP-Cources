#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word)
    {
        words.push_back(word);
    }

    for (const std::string& w : words)
    {
        for (int i = 0; i < w.length(); ++i)
        {
            std::cout << w;
        }
    }

    return 0;
}
