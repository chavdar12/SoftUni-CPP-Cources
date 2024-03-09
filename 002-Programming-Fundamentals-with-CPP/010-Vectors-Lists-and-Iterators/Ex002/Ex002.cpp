#include <iostream>
#include <stack>
#include <string>

bool is_valid(const std::string& brackets)
{
    std::stack<char> s;
    for (char bracket : brackets)
    {
        if (bracket == '(' || bracket == '[' || bracket == '{')
        {
            s.push(bracket);
        }
        else
        {
            if (s.empty()) return false;
            if ((bracket == ')' && s.top() != '(') ||
                (bracket == ']' && s.top() != '[') ||
                (bracket == '}' && s.top() != '{'))
            {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main()
{
    std::string brackets;
    std::getline(std::cin, brackets);

    if (is_valid(brackets))
    {
        std::cout << "valid" << '\n';
    }
    else
    {
        std::cout << "invalid" << '\n';
    }

    return 0;
}
