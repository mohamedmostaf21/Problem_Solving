#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 2e5+2;
string str[N];
map<string,int>mp;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(!mp[str[i]])
        {
            cout << str[i] << "\n";
            mp[str[i]] = 1;
        }
    }
    return 0;
}


