#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> array(n);

    for (int& num : array)
    {
        std::cin >> num;
    }

    std::sort(array.begin(), array.end());

    const int min_diff = *std::adjacent_difference(array.begin(), array.end(), array.begin());

    std::cout << min_diff;

    return 0;
}
