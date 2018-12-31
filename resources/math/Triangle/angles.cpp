#include<bits/stdc++.h>
#define PI acos(-1.0)

using namespace std;

// according to sine rule, sin A/a = sin B/b = sin C/c

// according to cosine rule : Cos A = ((b*b) + (c*c) - (a*a)) / (2*b*c)
void getAngles(double a, double b, double c)
{
    double A = acos(((b*b) + (c*c) - (a*a)) / (2*b*c)) * 180 / PI;
    double B = acos(((c*c) + (a*a) - (b*b)) / (2*a*c))* 180 / PI;
    double C = acos(((a*a) + (b*b) - (c*c)) / (2*a*b))* 180 / PI;

    cout << "Angle A = " << A << endl;
    cout << "Angle B = " << B << endl;
    cout << "Angle C = " << C << endl;
}
int main()
{
    getAngles(10, 10, 10);
    return 0;
}