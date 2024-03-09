#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int convert_to_minutes(const std::string& time)
{
    int hours, minutes;
    std::istringstream ss(time);
    ss >> hours;
    ss.ignore();
    ss >> minutes;
    return hours * 60 + minutes;
}

int find_best_bus(const std::vector<std::string>& buses, const std::string& train_time)
{
    const int train_departure = convert_to_minutes(train_time);
    int min_wait = INT_MAX;
    int best_bus_index = -1;

    for (int i = 0; i < buses.size(); ++i)
    {
        const int wait_time = convert_to_minutes(buses[i]) - train_departure;
        if (wait_time >= 0 && wait_time < min_wait)
        {
            min_wait = wait_time;
            best_bus_index = i + 1;
        }
    }

    return best_bus_index;
}

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<std::string> buses(n);
    for (std::string& bus : buses)
    {
        std::getline(std::cin, bus);
    }

    std::string train_time;
    std::getline(std::cin, train_time);

    std::cout << find_best_bus(buses, train_time) << '\n';

    return 0;
}
