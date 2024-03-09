#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int main()
{
    std::vector<int> numbers;
    std::string command;

    std::getline(std::cin, command);
    std::istringstream iss(command);
    std::copy(std::istream_iterator<int>(iss), std::istream_iterator<int>(), std::back_inserter(numbers));

    while (std::cin >> command && command != "end")
    {
        int num, index;
        if (command == "Add")
        {
            std::cin >> num;
            numbers.push_back(num);
        }
        else if (command == "Remove")
        {
            std::cin >> num;
            numbers.erase(std::remove(numbers.begin(), numbers.end(), num), numbers.end());
        }
        else if (command == "RemoveAt")
        {
            std::cin >> index;
            numbers.erase(numbers.begin() + index);
        }
        else if (command == "Insert")
        {
            std::cin >> num >> index;
            numbers.insert(numbers.begin() + index, num);
        }
    }

    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
