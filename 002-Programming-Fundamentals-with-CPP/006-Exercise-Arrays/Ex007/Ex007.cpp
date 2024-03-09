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

    int rotations;
    std::cin >> rotations;

    std::rotate(array.begin(), array.begin() + rotations % n, array.end());

    for (const int& num : array)
    {
        std::cout << num << " ";
    }

    return 0;
}
