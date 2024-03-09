#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<std::string> words;
    std::string word;
    while (std::cin >> word && word != "end")
    {
        std::reverse(word.begin(), word.end());
        words.push_back(word);
    }

    for (const std::string& w : words)
    {
        std::cout << w << " = " << std::string(w.rbegin(), w.rend()) << '\n';
    }

    return 0;
}
