#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

using namespace std;

#define re return
#define PI          3.14159
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define sqrt(x) sqrt(abs(x))
#define mp make_pair
#define pi (3.14159265358979323846264338327950288419716939937510)
#define fo(i, n) for(int i = 0; i < n; ++i)
#define ro(i, n) for(int i = n - 1; i >= 0; --i)
#define unique(v) v.resize(unique(all(v)) - v.begin())
#define print1(a)    cout<<a<<endl
#define print2(a,b) cout<<a<<" "<<b<<endl
#define print3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define printD(p,v) cout << fixed << setprecision(p) << v << endl
#define oo          (1<<30)
//#define pi          (2.0*acos(0.0))
#define ERR         1e-5
#define PRE         1e-8
#define SZ(s)       ((int)s.size())
#define ISS         istringstream
#define OSS         ostringstream
#define VD          vector<double>
#define VLL         vector<long long>
#define SII         set<int>::iterator
#define SI          set<int>
#define mem(a,b)    memset(a,b,sizeof(a))
#define fr(i,a,b)   for(i=a;i<=b;i++)
#define frn(i,a,b)  for(i=a;i>=b;i--)
#define fri(a,b)    for(i=a;i<=b;++i)
#define frin(a,b)   for(i=a;i>=b;i--)
#define frj(a,b)    for(j=a;j<=b;j++)
#define frjn(a,b)   for(j=a;j>=b;j--)
#define frk(a,b)    for(k=a;k<=b;k++)
#define frkn(a,b)   for(k=a;k>=b;k--)
#define frl(a,b)    for(l=a;l<=b;l++)
#define frln(a,b)   for(l=a;l>=b;l--)
#define EQ(a,b)     (fabs(a-b)<ERR)
#define init(a,b,c)  for(int I=0;I<b;I++)    a[I] = c
#define CROSS(a,b,c,d) ((b.x-a.x)*(d.y-c.y)-(d.x-c.x)*(b.y-a.y))
#define FORE(i,a)   for(typeof((a).begin())i=(a).begin();i!=(a).end();i++)
#define typing(j,b) typeof((b).begin()) j=(b).begin();
#define BE(a)       a.begin(),a.end()
#define rev(a)      reverse(BE(a));
#define sorta(a)    sort(BE(a))
#define popb        pop_back
#define round(i,a)  i = ( a < 0 ) ? a - 0.5 : a + 0.5;
#define makeint(n,s)  istringstream(s)>>n
#define inpow(a,x,y) int i; a=x;fri(2,y)  a*=x
#define cntbit(mask) __builtin_popcountll(mask)
//0 based print
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}



template <class T> T abs (T x) { re x > 0 ? x : -x; }
template <class T> T gcd (T a, T b) { re a ? gcd (b % a, a) : b; }
template <class T> int sgn (T x) { re x > 0 ? 1 : (x < 0 ? -1 : 0); }
template <class T> T sqr (T x) { re x * x; }

typedef double D;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef long double ld;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef unsigned long long ull;
typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> _tree;



D getLength(D x1, D y1, D x2, D y2)
{
    re sqrt(sqr(x2-x1) + sqr(y2-y1));
}

int main()
{
    int n,i;
    D r, co[101][2];

    freopen("in.txt", "r", stdin);

    cin >> n >> r;

    fri(0, n-1)
    {
        cin >> co[i][0] >> co[i][1];
    }

    D sum = 0;

    fri(0, n-1)
    {
        if(i == n-1)
        {
            sum += getLength(co[i][0], co[i][1], co[0][0], co[0][1]);
        }
        else
        {
            sum += getLength(co[i][0], co[i][1], co[i+1][0], co[i+1][1]);
        }
    }
    sum += r*PI*2;

    printD(2, sum);

    re 0;
}
