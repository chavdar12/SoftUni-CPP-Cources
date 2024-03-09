#include <iostream>
#include <vector>
#include <map>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> array(n);
    std::map<int, int> frequency_map;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> array[i];
        frequency_map[array[i]]++;
    }

    int max_frequency = 0;
    for (const auto& pair : frequency_map)
    {
        max_frequency = std::max(max_frequency, pair.second);
    }

    for (const auto& pair : frequency_map)
    {
        if (pair.second == max_frequency)
        {
            std::cout << pair.first << " ";
        }
    }

    return 0;
}
