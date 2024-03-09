#include <iostream>
#include <cmath>

void print_closest_to_center(const double x1, const double y1, const double x2, const double y2)
{
    const double distance1 = sqrt(x1 * x1 + y1 * y1);
    const double distance2 = sqrt(x2 * x2 + y2 * y2);

    if (distance1 <= distance2)
    {
        std::cout << "(" << x1 << ", " << y1 << ")";
    }
    else
    {
        std::cout << "(" << x2 << ", " << y2 << ")";
    }
}

int main()
{
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    print_closest_to_center(x1, y1, x2, y2);

    return 0;
}
