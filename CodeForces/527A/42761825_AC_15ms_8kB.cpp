#include <iostream>
#include <cmath>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


int main()
{

   ll a,b;
   cin >> a >> b;
   ll cnt = 0;
   while(a >0 && b >0){
        if(a>=b){
            ll c = a%b;
            cnt += a/b;
            a = c;

        }else{
            ll c = b%a;
            cnt += b/a;
            b = c;
        }
   }
   cout << cnt;

    return 0;
}
