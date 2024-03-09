#include <iostream>

int calculate_rectangle_area(const int width, const int height)
{
    return width * height;
}

int main()
{
    int width, height;
    std::cin >> width >> height;

    const int area = calculate_rectangle_area(width, height);
    std::cout << area;

    return 0;
}
