#include <iostream>

double operation(const int a, const int b, const char op)
{
    switch (op)
    {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return static_cast<double>(a) / b;
    default: throw std::invalid_argument("Invalid operation");
    }
}

int main()
{
    int num1, num2;
    char op;

    std::cin >> num1 >> num2 >> op;

    try
    {
        std::cout << operation(num1, num2, op);
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << e.what();
    }

    return 0;
}
