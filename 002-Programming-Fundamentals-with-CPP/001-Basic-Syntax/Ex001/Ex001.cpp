#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string name;
    int age;
    float grade;

    getline(std::cin, name);
    std::cin >> age >> grade;

    std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << std::fixed << std::setprecision(2) << grade <<
        '\n';

    return 0;
}
