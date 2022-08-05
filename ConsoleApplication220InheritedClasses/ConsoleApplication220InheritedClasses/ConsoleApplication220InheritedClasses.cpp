using namespace std;
#include <iostream>
#include <cmath>



class Shape {
public:
    string Color;
    void getArea();
};
    
class Rectangle : public Shape {
public:
    int Height;
    int Width;
    void getArea(int Height, int Width) {
        int Area;
        Area = Width * Height;
        cout << "The area of the Rectangle is " << Area << "\n";
    }
};

class Triangle : public Shape {
public:
    int Base;
    int Height;
    void getArea(int Base, int Height) {
        int Area;
        Area = (Base * Height) * .5;
        cout << "The area of the Triangle is " << Area << "\n";
    }
};

class Circle : public Shape {
public:
    float Radius;
    void getArea(float Radius) {
        float pi = 3.141592654;
        float Area;
        Area = pi * (pow(Radius, 2));
        cout << "The area of the Circle is " << Area << "\n";
    }
};

int main()
{   
    Rectangle myRectangle;
    Triangle myTriangle;
    Circle myCircle;
#pragma region myRectangle
    myRectangle.Width = 10;
    myRectangle.Height = 5;
    myRectangle.getArea(myRectangle.Height, myRectangle.Width);
#pragma endregion

#pragma region myTriangle;
    myTriangle.Base = 10;
    myTriangle.Height = 5;
    myTriangle.getArea(myTriangle.Base, myTriangle.Height);
#pragma endregion

#pragma region myCircle;
    myCircle.Radius = 5.0f;
    myCircle.getArea(myCircle.Radius);
#pragma endregion
}