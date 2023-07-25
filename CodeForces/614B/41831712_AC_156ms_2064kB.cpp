#include<cstdio>
#include<cstring>
#include<stack>
#include<iterator>
#include<queue>
#include<cmath>
#include<set>
#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn=1e6+5;
char ans[maxn],s[maxn];
int check(char *s)
{
    int len=strlen(s);
    if(len==1&&s[0]=='0')return 0;
    int i,cnt=0;
    for(i=0;i<len;i++)
    {
        if(s[i]=='1')cnt++;
        if(cnt>=2)break;
        if(s[i]!='1'&&s[i]!='0')break;
    }
    if(i==len)return 1;
    else return 2;
}
int main()
{
    int n,i;
    string tt="1";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> s;
        int key=check(s);
        if(key==0)break;
        else if(key==1)
            strcat(ans,s+1);
        else
            tt=s;
    }
    if(i<n)puts("0");
    else cout<<tt<<ans<<endl;
    return 0;
}
