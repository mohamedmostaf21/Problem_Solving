#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
void meowing()
{
    ll n;
    cin>>n;

    string s;
    cin>>s;

    vector<char> v;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    v.push_back(s[0]);
    for(ll i = 1; i<n; i++)
    {
        if(v.back() == s[i])
            continue;
        else{
            v.push_back(s[i]);
        }
    }

    if(v.size() == 4)
    {
        if(v[0] == 'm' && v[1] == 'e' && v[2] == 'o' && v[3] == 'w')
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

        return;
    }
    else{
        cout<<"NO\n";
        return;
    }

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        meowing();
    }

    return 0;
}
