#include <iostream>
#include <stack>
using namespace std;
typedef long long  ll;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    FIO
    int t;
    cin >> t;
    stack<ll>s;
    while(t--){
        ll x;
        cin >> x;
        if(x == 1){
            cin >> x;
            s.push(x);
        }else if(x == 2){
            if(!s.empty())
                s.pop();
        }else if(x == 3){
            if(!s.empty())
                cout << s.top() << '\n';
            else
                cout << "Empty!" << '\n';
        }
    }
    return 0;
}
