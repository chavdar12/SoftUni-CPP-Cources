#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> array(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> array[i];
    }

    int longest_start_index = 0, longest_length = 1, current_length = 1;

    for (int i = 1; i < n; ++i)
    {
        if (array[i] == array[i - 1])
        {
            if (++current_length > longest_length)
            {
                longest_start_index = i - current_length + 1;
                longest_length = current_length;
            }
        }
        else
        {
            current_length = 1;
        }
    }

    for (int i = 0; i < longest_length; ++i)
    {
        std::cout << array[longest_start_index + i] << " ";
    }

    return 0;
}
