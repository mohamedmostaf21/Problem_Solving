#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int counterH = 0,ans = 0;
    int n = str.length();
    for(int i = 0; i+4 < str.length(); i++){
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








