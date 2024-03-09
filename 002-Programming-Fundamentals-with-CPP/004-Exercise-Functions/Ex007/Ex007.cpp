#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

bool is_valid_password(const std::string& password)
{
    const int length = password.length();
    const int digit_count = std::count_if(password.begin(), password.end(), ::isdigit);

    if (length < 6 || length > 10)
    {
        std::cout << "Password must be between 6 and 10 characters\n";
        return false;
    }

    if (!std::all_of(password.begin(), password.end(), ::isalnum))
    {
        std::cout << "Password must consist only of letters and digits\n";
        return false;
    }

    if (digit_count < 2)
    {
        std::cout << "Password must have at least 2 digits\n";
        return false;
    }

    return true;
}

int main()
{
    std::string password;
    std::cin >> password;

    if (is_valid_password(password))
    {
        std::cout << "Password is valid\n";
    }

    return 0;
}
