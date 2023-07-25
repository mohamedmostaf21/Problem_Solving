#include <iostream>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
    string str;
    cin >> str;
    ll counterH = 0,ans = 0;
    for(ll i = 0; i+4 < str.length(); i++){
        if(str.substr(i,5) == "heavy"){ //heavymetalismetal
            counterH++;

        }
        if(str.substr(i,5) == "metal"){
            ans+= counterH;
        }

    }
    cout << ans;
    return 0;
}








