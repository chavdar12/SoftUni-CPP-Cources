#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string line;
    std::getline(std::cin, line);

    std::istringstream ss(line);
    int sum = 0, num;
    std::string word, non_numeric_words;

    while (ss >> word)
    {
        std::istringstream iss(word);
        if (iss >> num)
        {
            sum += num;
        }
        else
        {
            non_numeric_words += word + " ";
        }
    }

    std::cout << sum << '\n';
    std::cout << non_numeric_words << '\n';

    return 0;
}
