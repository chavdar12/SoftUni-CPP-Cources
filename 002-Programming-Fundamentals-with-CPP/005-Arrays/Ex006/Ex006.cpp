#include <iostream>
#include <vector>

int main()
{
    int size;
    std::cin >> size;

    std::vector<int> array1(size);
    std::vector<int> array2(size);

    for (int i = 0; i < size; ++i)
    {
        std::cin >> array1[i];
    }

    for (int i = 0; i < size; ++i)
    {
        std::cin >> array2[i];
    }

    bool identical = true;
    int sum = 0;
    int index = -1;

    for (int i = 0; i < size; ++i)
    {
        sum += array1[i];
        if (array1[i] != array2[i])
        {
            identical = false;
            index = i;
            break;
        }
    }

    if (identical)
    {
        std::cout << "Arrays are identical. Sum: " << sum << '\n';
    }
    else
    {
        std::cout << "Arrays are not identical. Found difference at " << index << " index." << '\n';
    }

    return 0;
}
