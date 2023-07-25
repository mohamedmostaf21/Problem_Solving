#include <iostream>
#include <stack>
using namespace std;
typedef long long  ll;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
char rev(char c){
    return (c == ')') ? '(' :'[';
}

int main()
{
    FIO
    int t;
    cin >> t;
    string exp;
    while(t--){
        cin >> exp;
        stack<char>sk;
        int flag = 0;
        for(int i = 0; i < exp.length(); i++){
                if(flag > 0)
                    break;
            if(exp[i] == '(' || exp[i] == '[')
                sk.push(exp[i]);
            else if(exp[i] == ')' || exp[i] == ']'){
                if(sk.empty() || (sk.top() != rev(exp[i])))
                    flag = 1;
                else
                    sk.pop();
            }
        }
        if (!sk.empty()) flag = 1;
        if(flag > 0)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
