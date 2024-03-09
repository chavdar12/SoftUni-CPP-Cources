#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> array(n);

    for (int& num : array)
    {
        std::cin >> num;
    }

    for (const int& num1 : array)
    {
        for (const int& num2 : array)
        {
            std::cout << num1 * num2 << " ";
        }
    }

    return 0;
}
