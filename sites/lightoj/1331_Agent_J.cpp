#include<bits/stdc++.h>

using namespace std;

double areaForScalenes(double a, double b, double c)
{
    double perimeter = (a+b+c)/2;
    return sqrt(perimeter * (perimeter-a) * (perimeter-b) * (perimeter-c));
}

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int test;
    cin >> test;

    for(int i=1; i<=test; i++)
    {
        double r1,r2,r3;
        cin >> r1 >> r2 >> r3;

        double area_of_triangle = areaForScalenes(r1+r2, r2+r3, r1+r3);
        double a = r2+r3;
        double b = r1+r3;
        double c = r1+r2;
        double A = acos(((b*b) + (c*c) - (a*a)) / (2*b*c));
        double B = acos(((c*c) + (a*a) - (b*b)) / (2*a*c));
        double C = acos(((a*a) + (b*b) - (c*c)) / (2*a*b));

        double total_area_of_arcs = ((A * r1 * r1) + (B*r2*r2) + (C*r3*r3))/2;

        double area_of_diamond = area_of_triangle - total_area_of_arcs;

        printf("Case %d: %lf\n",i,area_of_diamond);
    }
    return 0;
}

