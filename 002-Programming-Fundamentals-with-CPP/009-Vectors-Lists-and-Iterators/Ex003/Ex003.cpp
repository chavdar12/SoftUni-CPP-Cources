#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int num;

    while (std::cin >> num) {
        numbers.push_back(num);
    }

    for (int i = 0; i < numbers.size() / 2; ++i) {
        std::cout << numbers[i] + numbers[numbers.size() - 1 - i] << " ";
    }

    if (numbers.size() % 2 != 0) {
        std::cout << numbers[numbers.size() / 2];
    }

    return 0;
}