#include <iostream>
#include <cmath>
#include <iomanip> 

struct Point {
    double x, y;
};

struct Line {
    Point p1, p2;
};

double calculateDistance(const Point& p1, const Point& p2) {
    return std::sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

Point calculateMidpoint(const Point& p1, const Point& p2) {
    Point midpoint;
    midpoint.x = (p1.x + p2.x) / 2.0;
    midpoint.y = (p1.y + p2.y) / 2.0;
    return midpoint;
}

int main() {
    Line line;
    std::cout << "Enter coordinates of first point (X1 Y1): ";
    std::cin >> line.p1.x >> line.p1.y;

    std::cout << "Enter coordinates of second point (X2 Y2): ";
    std::cin >> line.p2.x >> line.p2.y;

    double distance = calculateDistance(line.p1, line.p2);
    Point midpoint = calculateMidpoint(line.p1, line.p2);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Distance: " << distance << std::endl;
    std::cout << "Midpoint: " << midpoint.x << " " << midpoint.y << std::endl;

    return 0;
}

//sushant