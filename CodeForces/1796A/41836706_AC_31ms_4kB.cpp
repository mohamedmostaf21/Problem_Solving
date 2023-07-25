#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t;
    cin >> t;
    string FB = "FBFFBFFBFBFFBFFBF";
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l,r;
        bool flag = false;
        for(int i = 0; i < 8; i++){
            if(s == FB.substr(i,n)){
                //l = i+1;
                //r = i+n;
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "YES\n";
            //cout << l << " " << r << endl;
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
