#include <iostream>
#include <vector>

std::vector<int> calculate_lifetimes(const std::vector<int>& installation, const std::vector<int>& checkup)
{
    std::vector<int> lifetimes;
    for (size_t i = 0; i < installation.size(); ++i)
    {
        const int damage = installation[i] - checkup[i];
        int years = (damage + 1) / 2;
        lifetimes.push_back(years);
    }
    return lifetimes;
}

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> checkup(N);
    std::vector<int> installation(N);

    for (int i = 0; i < N; ++i)
    {
        std::cin >> checkup[i];
    }

    for (int i = 0; i < N; ++i)
    {
        std::cin >> installation[i];
    }

    const std::vector<int> lifetimes = calculate_lifetimes(installation, checkup);

    for (const int lifetime : lifetimes)
    {
        std::cout << lifetime << " ";
    }
    std::cout << '\n';

    return 0;
}
