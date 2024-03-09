#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    const double discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        std::cout << "no roots";
    }
    else if (discriminant == 0)
    {
        const double root = -b / (2 * a);
        std::cout << root;
    }
    else
    {
        const double root1 = (-b + sqrt(discriminant)) / (2 * a);
        const double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << root1 << " " << root2;
    }

    return 0;
}
