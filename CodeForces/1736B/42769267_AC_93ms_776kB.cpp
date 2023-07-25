#include <iostream>
#include <cmath>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std;

int solve(int x,int y){
    return x*y/__gcd(x,y);
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n+1];
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }
        bool flag = true;
        b[0] = a[0];
        b[n] = a[n-1];
        for(int i = 1; i < n; i++){
            b[i] = solve(a[i],a[i-1]);
        }
        for(int i = 1; i < n; i++){
            if(__gcd(b[i],b[i+1]) != a[i]){
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

    }

    return 0;
}
