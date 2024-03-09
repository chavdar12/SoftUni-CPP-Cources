#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::vector<int> numbers;
    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        if (num >= 0) {
            numbers.push_back(num);
        }
    }

    if (numbers.empty()) {
        std::cout << "empty" << '\n';
    } else {
        for (int i = numbers.size() - 1; i >= 0; --i) {
            std::cout << numbers[i] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
