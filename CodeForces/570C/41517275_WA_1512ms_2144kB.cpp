#include <iostream>

using namespace std;
typedef long long LL;
#define MOD 1000000007


int main()
{
    string s;
    int n,m;
    int ok[300005];
    cin >> n >> m;
    cin >> s;
    LL group(0),num(0);
    for (int i=0;i<n;i++){
        if (s[i] == '.'){
            num ++;
            if (i == 0 || s[i-1] != '.'){
                group ++;
            }
            ok[i+1] = 1; 
        }
    }

    for (int i=1;i<=m;i++){
        string ts;
        int d;
        cin >> d >> ts;
        char c = ts[0];
        int a = ok[d], b = (c == '.');
        if (a != b){
            if (a){
                num --;
            }
            else {
                num ++;
            }
            if (ok[d-1] && ok[d+1] && !b){
                group ++;
            }
            if (ok[d-1] && ok[d+1] && b){
                group --;
            }
            if (!ok[d-1] && !ok[d+1] && !b){
                group --;
            }
            if (!ok[d-1] && !ok[d+1] && b){
                group ++;
            }
        }
        ok[d] = b;
        cout << num - group << endl;
    }
    return 0;
}
