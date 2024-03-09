#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<std::string> products;
    for (int i = 0; i < n; ++i)
    {
        std::string product;
        std::getline(std::cin, product);
        products.push_back(product);
    }

    std::sort(products.begin(), products.end());

    for (int i = 0; i < n; ++i)
    {
        std::cout << i + 1 << "." << products[i] << '\n';
    }

    return 0;
}
