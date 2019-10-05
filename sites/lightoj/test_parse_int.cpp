#include <bits/stdc++.h>

using namespace std;

#define fri(a, b) for (i = a; i <= b; i++)

int parseInt(string value)
{
    int i;
    int len = value.size();
    int num = 0;
    int mul = 1;

    fri(0, len-1)
    {
        num = num * mul + value[i]-'0';
        mul = 10;
    }
    return num;
}
int main()
{
    string v;
    while(cin >> v)
    {
        cout << parseInt(v) << endl;
    }
    return 0;
}