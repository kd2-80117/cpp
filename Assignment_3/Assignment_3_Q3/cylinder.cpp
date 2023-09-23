#include "./cylinder.h"

Cylinder::Cylinder()
{
    this->radius = 0;
    this->radius = 0;
}
Cylinder::Cylinder(double radius, double height)
{
    this->radius = radius;
    this->height = height;
}
double Cylinder::getRadius()
{
    return radius;
}
double Cylinder::getHeight()
{
    return height;
}
void Cylinder::setHeight(double height)
{
    this->height = height;
}
void Cylinder::setRadius(double radius)
{
    this->radius = radius;
}
double Cylinder::getVolume()
{
    return 3.14 * radius * radius * height;
}
void Cylinder::printVolume()
{
    cout << "Cylinder volume is = " << getVolume();
}