#include <iostream>
#include <algorithm>
using namespace std;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    FIO
    int n,i;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    int lef,rig;

        for(i = 1; i <= n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b+1,b+n+1);
        for(lef = 1; lef <= n; lef++){
            if(a[lef] != b[lef])
                break;
        }
        if(lef > n){
            cout << "yes" << '\n';
            cout << 1 << " " << 1 << '\n';
        }
        else{
            for(rig = n; rig > 0; rig--){
                if(a[rig] != b[rig])
                    break;
            }
            for(i = lef; i < rig; i++){
                if(a[i] <= a[i+1]){
                    cout << "no" <<'\n';
                    break;
                }

            }
            if(i == rig){
                cout << "yes" << '\n';
                cout << lef << " " << rig << '\n';
            }

        }



	return 0;
}
