#include <iostream>
#include <string>

class Shape
{
public:
    virtual int CalculateArea() = 0;

protected:
    int area = 0;
};

class Square : public Shape
{
public:
    int height = 0;
    
    int CalculateArea() override
    {
        area = height * height;
        return area;
    }
 };

class Circle : public Shape
{
public:
     int radius = 0;
     
     int CalculateArea() override
     {
         area = 3.14 * (radius * radius);
         return area;
     }
};

int main()
{
    Square square;
    square.height = 10;
    std::cout << "Square Area: " << square.CalculateArea() << std::endl;
    Circle circle;
    circle.radius = 10;
    std::cout << "Circle Area: " << circle.CalculateArea() << std::endl;
}
