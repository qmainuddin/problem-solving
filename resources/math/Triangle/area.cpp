#include<bits/stdc++.h>

using namespace std;

/*
sides from points A(x1, y1), B(x2, y2), C(x3, y3)
side a = ((x3-x2)*(x3-x2)) + ((y3-y2) * (y3-y2))
b = ((x1-x3)*(x1-x3)) + ((y1-y3) * (y1-y3))
c = ((x2-x1)*(x2-x1)) + ((y2-y1) * (y2-y1))
*/

double areaForEquilateralTriangle(double sideLength)
{
    return sqrt(3.0)*sideLength*sideLength/4;
}
double areaForScalenes(double a, double b, double c)
{
    double perimeter = (a+b+c)/2;
    return sqrt(perimeter * (perimeter-a) * (perimeter-b) * (perimeter-c));
}
double get_area_from_points(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return abs((x1 * (y2-y3)) + (x2 * (y3-y1)) + (x3 * (y1-y2)))/2;
}
double area_from_height_base(double height, double base)
{
    return .5 * height * base;
}
int main()
{
    return 0;
}