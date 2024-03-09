#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> array(n);

    for (int& num : array)
    {
        std::cin >> num;
    }

    std::vector<int> top_integers;

    for (int i = 0; i < n; ++i)
    {
        if (std::none_of(array.begin() + i + 1, array.end(), [&](const int num) { return num >= array[i]; }))
        {
            top_integers.push_back(array[i]);
        }
    }

    for (const int& num : top_integers)
    {
        std::cout << num << " ";
    }

    return 0;
}
