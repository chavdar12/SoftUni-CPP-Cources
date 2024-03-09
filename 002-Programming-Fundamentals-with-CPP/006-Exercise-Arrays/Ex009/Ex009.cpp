#include <iostream>
#include <vector>
#include <set>
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

    int magic_sum;
    std::cin >> magic_sum;

    std::set<std::pair<int, int>> unique_pairs;

    for (int i = 0; i < n; ++i)
    {
        auto it = std::find_if(array.begin() + i + 1, array.end(),
                               [&](const int num) { return num == magic_sum - array[i]; });
        if (it != array.end())
        {
            unique_pairs.insert(std::make_pair(std::min(array[i], *it), std::max(array[i], *it)));
        }
    }

    for (const auto& pair : unique_pairs)
    {
        std::cout << pair.first << " " << pair.second << '\n';
    }

    return 0;
}
