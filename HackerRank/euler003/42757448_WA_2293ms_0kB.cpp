#include <iostream>
#include <cmath>
#include <limits.h>
#include <vector>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;
vector<ll> primeFct(int N){
    vector<ll>res;
    for(int i = 2; i < N; i++){ //3 --> 6
        if(N%i == 0){ //6%3 == 0 yes
            ll cnt  = 0;
            while(N%i == 0){ //6%3 == 0 yes, 2%3 == 0 No
                cnt++; //1
                N /= i; //6/3 = 2
            }
            ll clc = pow(i,cnt);
            res.push_back(clc); //2 ^ 1 , 3 ^ 1
        }
    }
    if(N > 1){
        ll clc = pow(N,1);
        res.push_back(clc);
    }
    return res;
}

//void primeFct2(int N){
//    for(int i = 2; i < N; i++){ //3 --> 6
//        if(N%i == 0){ //6%3 == 0 yes
//            int cnt  = 0;
//            while(N%i == 0){ //6%3 == 0 yes, 2%3 == 0 No
//                cnt++; //1
//                N /= i; //6/3 = 2
//            }
//            cout << i << " ^ " << cnt << '\n'; //2 ^ 1 , 3 ^ 1
//        }
//    }
//    if(N > 1){
//          cout << N << " ^ " << 1 << '\n';
//    }
//
//}
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll maxu = LONG_MIN;
        ll N;
        cin >> N;
        vector<ll>out;
        out = primeFct(N);
        vector<ll>::iterator it = out.begin();
        for( ; it != out.end(); it++){
            maxu = max(maxu,*it);
        }
        cout << maxu << '\n';
    }


    return 0;
}
