#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int size;
    std::cin >> size;

    std::vector<std::string> array(size);

    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }

    std::reverse(array.begin(), array.end());

    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i];
        if (i != size - 1)
        {
            std::cout << " ";
        }
    }

    return 0;
}
