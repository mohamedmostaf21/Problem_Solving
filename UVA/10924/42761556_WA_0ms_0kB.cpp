#include <iostream>
#include <cmath>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;
//void primeFct(ll N){
//     for (unsigned long long i = 2; i * i <= N; i++)
//      // remove factor, actually it's a prime
//      // (can occur multiple times, e.g. 20=2*2*5)
//      while (N % i == 0 && N != i) // note: keep last prime
//        N /= i;
//
//   cout << N << '\n';
//}
bool isPrime(int x){
    if(x == 0 || x == 1) return false;
    for(int i = 2; i*i <= x; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
//void primeFct2(int N){
//    for(int i = 2; i*i <= N; i++){ //3 --> 6
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

    string s;
    while(cin >> s){
        long int res = 0;
        for(int i = 0; i != s.size(); i++){
            if(isupper(s[i]))
                res += s[i] - 'A' + 27;
            else if(islower(s[i]))
                res += s[i] - 'a' + 1;
        }
        if(isPrime(res))
            cout << "It is a prime word." << "\n";
        else
            cout << "It is not a prime word." << "\n";
    }


    return 0;
}
