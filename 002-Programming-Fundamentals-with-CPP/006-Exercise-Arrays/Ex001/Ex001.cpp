#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> first_array(n);
    std::vector<int> second_array(n);

    for (int i = 0; i < n; ++i)
    {
        int num1, num2;
        std::cin >> num1 >> num2;

        if (i % 2 == 0)
        {
            first_array[i] = num1;
            second_array[i] = num2;
        }
        else
        {
            first_array[i] = num2;
            second_array[i] = num1;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << first_array[i] << " ";
    }
    std::cout << '\n';
    for (int i = 0; i < n; ++i)
    {
        std::cout << second_array[i] << " ";
    }

    return 0;
}
