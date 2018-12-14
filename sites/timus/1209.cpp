#include<bits/stdc++.h>

using namespace std;

bool isPerfectSquare(long long number)
{
    long long iVar;
    float fVar;

    fVar=sqrt((double)number);
    iVar=fVar;

    if(iVar==fVar)
        return true;
    else
        return false;
}

int get_digit(long long digit_position)
{
    /*if(digit_position == 0) return 1;
    for(long long i=1; ; i++)
    {
        long long digit_count = (i*(i+1))/2;
        if(digit_count == digit_position) return 1;
        else if(digit_count > digit_position) return 0;
    }*/

    long long result = 8*(digit_position) -7;
    if(isPerfectSquare(result)) return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    long long k[n];
    for(int i =0; i<n; i++)
    {
        cin >> k[i];
    }
    for(int i=0; i<n; i++)
    {
        cout << get_digit(k[i]) << " ";
    }
    return 0;
}
