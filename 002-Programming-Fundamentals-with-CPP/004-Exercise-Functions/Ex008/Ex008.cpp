#include <iostream>
#include <iomanip>
#include <map>

void calculateTotalPrice(const std::string& product, const int quantity)
{
    std::map<std::string, double> prices = {{"coffee", 1.50}, {"water", 1.00}, {"coke", 1.40}, {"snacks", 2.00}};

    if (prices.find(product) == prices.end())
    {
        std::cout << "Invalid product" << '\n';
        return;
    }

    const double total_price = prices[product] * quantity;

    std::cout << std::fixed << std::setprecision(2) << total_price << '\n';
}

int main()
{
    std::string product;
    int quantity;
    std::cin >> product >> quantity;

    calculateTotalPrice(product, quantity);

    return 0;
}
