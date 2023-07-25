#include <iostream>
#include <cmath>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std;

bool isPrime(long int x){
    if(x == 0 || x == 1) return false;
    for(int i = 2; i <= sqrt(x+0.5); ++i){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

bool isThreeDisctFactors(ll n)
{
    int sq = (int)sqrt(n);
    if (1LL * sq * sq != n)
        return false;

    return isPrime(sq) ? true : false;
}

int main()
{

    int n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n; i++){
         if(isThreeDisctFactors(v[i]))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
