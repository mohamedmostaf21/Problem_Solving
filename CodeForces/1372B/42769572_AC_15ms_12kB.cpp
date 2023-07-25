#include <iostream>
#include <cmath>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--){
        ll x;
        bool flag = false;
        cin >> x;
        if(x%2 == 0){
            cout << x/2 << " " << x/2 << "\n";
        }else{
            for(int i = 2; i*i <= x; i++){
                if(x%i == 0){
                    cout << x/i << " " << x - x/i << "\n";
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                cout << 1 << " " << x-1 << "\n";
            }
        }

    }

    return 0;
}
