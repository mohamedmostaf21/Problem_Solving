#include <iostream>
#include <vector>
#include <math.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int main()
{
    FIO
    int t;
    cin >> t;
    while(t--){
        int n;
        int i;
        ll sum = 0;
        cin >> n;
        vector<ll>v;
        for(i = 0; i < n; i++){
            ll ai;
            cin >> ai;
            v.push_back(ai);
            sum += v[i];
        }
        i = 1;
        if(sum <= 2*pow(10,5)){
            for(; i < n; i++){
                while(v[i] > v[0]){
                        v[0] += 1;
                        v[i] -= 1;
                }
            }
        }else{
             for(; i < n; i++){
                v[0] += v[i]/2;
            }
        }

        cout << v[0] << '\n';
    }
    return 0;
}

