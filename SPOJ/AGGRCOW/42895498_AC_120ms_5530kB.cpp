#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,c;
        cin >> n >> c;
        ll a[100009];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ll low=1,high=1000000001,ans=0;
        while(low<=high){
            ll mid = (low+high)/2;
            int f = a[0],temp = 1;
            for(int  i = 1; i < n; i++){
                if(a[i]-f >= mid){
                    temp++;
                    f = a[i];
                }
            }
            if(temp < c)
                high = mid-1;
            else{
                ans = mid;
                low = mid+1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
