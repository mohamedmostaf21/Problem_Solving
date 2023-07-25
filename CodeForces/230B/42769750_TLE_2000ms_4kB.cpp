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

    int n;
    cin >> n;
    vector<int>v(n);
    int divisors = 0;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < n; i++){
        int x = v[i]; //4
        for(int j = 1; j <= x; j++){
            if(x%j == 0){
                divisors++;
            }
        }
        if(divisors == 3)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
        divisors = 0;
    }

    return 0;
}
