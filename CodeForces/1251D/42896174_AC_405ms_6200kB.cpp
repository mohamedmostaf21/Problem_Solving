#include <iostream>
#include <bits/stdc++.h>
#define  FIO std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
const int INF = 1e9;
typedef long long ll;
using namespace std;
vector<pair<ll,ll>>v;
ll n,s,x,y;
//3
//3 26
//10 12
//1 4
//10 11
bool compare(ll x){
    ll t = s, cnt = n/2+1; //3/2 + 1 = 2
    bool flag = false;
    for(int i = n-1; i >= 0; i--){ // i = 2
        if(v[i].second >= x && cnt > 0){
            cnt--;
            t-=max(x,v[i].first);
        }else{
            t-=v[i].first;
        }
    }

    flag = (!cnt)&& t >= 0;

    return flag;
}
int main()
{
    FIO
    ll t;
    cin >> t;
    while(t--){
        //filter the vector every test case
        v.clear();
        cin >> n >> s;
        //10 12
        //1 4
        //10 11
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(), v.end());//1 4 , 10 11, 10 12
        ll low = 0, high = INF;
        while(low <= high){
            int mid = (low+high)/2;
            if(compare(mid))
                low = mid+1;
            else
                high = mid-1;
        }
        cout << low - 1 << "\n";
    }

    return 0;
}
