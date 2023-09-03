#include <iostream>

class Rectangle
{
private:
    static int count;
    int length;
    int width;

public:
    static int getCount()
    {
        return count;
    }

    void setDimensions(int len, int wid)
    {
        length = len;
        width = wid;
        count++;
    }

    int getArea()
    {
        return length * width;
    }
};

int Rectangle::count = 0;

int main()
{
    int n;
    std::cin >> n;

    Rectangle rectangles[n];

    for (int i = 0; i < n; i++)
    {
        int len, wid;
        std::cin >> len >> wid;
        rectangles[i].setDimensions(len, wid);
    }

    std::cout << "Total number of rectangles: " << Rectangle::getCount() << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Area of rectangle " << i + 1 << ": " << rectangles[i].getArea() << std::endl;
    }

    return 0;
}