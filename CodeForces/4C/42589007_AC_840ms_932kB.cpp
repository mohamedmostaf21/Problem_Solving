#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <map>
#include <algorithm>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
map<string,int>mp;
int main()
{
    FIO
    int t;
    cin>>t;
    while(t--)
    {
        string s,ans;
        cin >> s;
        if(!mp.count(s))
            cout << "OK" << endl;
        else
            cout << s << mp[s] << endl;
        mp[s]++;
    }
    return 0;
}


