#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<iostream>
#include<sstream>
#include<iterator>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<deque>
#include<queue>
#include<list>
using namespace std;
const double eps = 1e-8;
typedef long long LL;
typedef unsigned long long ULL;
const int INF = 0x3f3f3f3f;
const int INT_M_INF = 0x7f7f7f7f;
const LL LL_INF = 0x3f3f3f3f3f3f3f3f;
const LL LL_M_INF = 0x7f7f7f7f7f7f7f7f;
const int dr[] = {0, 0, -1, 1, -1, -1, 1, 1};
const int dc[] = {-1, 1, 0, 0, -1, 1, -1, 1};
const int MOD = 1e9 + 7;
const double pi = acos(-1.0);
const int MAXN=5010;
const int MAXM=100010;
using namespace std;
struct node
{
    int a,i;
}b[2005];
bool cmp (const node &x,const node &y)
{
    return  x.a>y.a;
}
bool cmp1(const node &x,const node &y)
{
    return  x.i<y.i;
}
int main()
{

    int  n,m;
    cin >> n >> m;

    for(int i=1;i<=n;i++)
    {
        cin >> b[i].a;
        b[i].i=i;
    }
    sort(b+1,b+n+1,cmp);
    int sum=0;
    for(int j=1;j<=m;j++)
        sum+=b[j].a;
    printf("%d\n",sum);
    sort(b+1,b+m+1,cmp1);

    b[m+1].i=n+1;
    for(int i=1;i<=m;i++)
    {
        if(i==1) b[i].i=1;
            cout<<b[i+1].i-b[i].i<<" ";
    }
    cout<<endl;

    return 0;

}
