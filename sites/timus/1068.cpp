#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int a=1, d, n, number, sum;

    cin >> number;

    if(number < 1)
    {
        d = -1;
    }
    else if(number > 1)
    {
        d = 1;
    }
    else
    {
        cout << number << endl;
        return 0;
    }

    n = (number - a + d)/d;
    sum = (n*(2*a+(n-1)*d))/2;

    cout << sum << endl;

    return 0;
}
