#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
typedef long long  ll;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
char rev(char c){
    return (c == ')') ? '(' :'[';
}

int main()
{
    FIO

    int q;
    cin >> q;

    deque<int>dq;
    while(q--){
        ll x;
        cin >> x;
        if(x == 1){
            cin >> x;
            dq.push_back(x);
        }else if(x == 2){
            if(!dq.empty()){
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }else if(x == 3){
            sort(dq.begin(),dq.end());
        }
    }
    return 0;
}
