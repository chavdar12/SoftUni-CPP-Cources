#include <iostream>
#include <string>

bool are_brackets_correct(const std::string& expression)
{
    int balance = 0;
    for (const char c : expression)
    {
        if (c == '(') ++balance;
        else if (c == ')') --balance;
        if (balance < 0) return false;
    }
    return balance == 0;
}

int main()
{
    std::string expression;
    std::getline(std::cin, expression);

    std::cout << (are_brackets_correct(expression) ? "correct" : "incorrect") << '\n';

    return 0;
}
