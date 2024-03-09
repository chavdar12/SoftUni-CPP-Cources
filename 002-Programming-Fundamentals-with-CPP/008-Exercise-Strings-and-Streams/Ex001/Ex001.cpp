#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <regex>

int main()
{
    std::string input;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::vector<std::string> usernames;

    const std::regex pattern("^[a-zA-Z0-9_-]{3,16}$");

    std::string username;
    while (std::getline(ss, username, ','))
    {
        if (std::regex_match(username, pattern))
        {
            usernames.push_back(username);
        }
    }

    for (const std::string& valid_username : usernames)
    {
        std::cout << valid_username << '\n';
    }

    return 0;
}
