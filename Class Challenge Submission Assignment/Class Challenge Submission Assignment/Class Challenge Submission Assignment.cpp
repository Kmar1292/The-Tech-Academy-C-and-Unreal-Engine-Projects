#include <iostream>

class Shape {
public:
    std::string Color;

    void getArea() {
        std::cout << "Area" << std::endl;
    };
};

class Rectangle : public Shape {
public:
    int Height;
    int Width;
};

class Triangle : public Shape {
public:
    int Base;
    int Height;
};

class Circle : public Shape {
public:
    int Radius;
};

int main()
{
    return 0;
}
