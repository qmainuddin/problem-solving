#include <cstdio>
#include <iostream>
using namespace std;
int solve(int m,int n)
{
    if(m==1||n==1)
        return m*n;
    if(m==2||n==2)
    {
        int ans=m*n/8*4;
        if((m*n)%8==2)
            return ans+=2;
        if((m*n)%8==6||(m*n)%8==4)
            return ans+=4;
    }
    return (m*n+1)/2;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("Case %d: ",i);
        printf("%d\n",solve(a,b));
    }
    return 0;
}
