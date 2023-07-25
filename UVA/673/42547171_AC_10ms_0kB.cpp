#include <iostream>
#include <stack>
using namespace std;
typedef long long  ll;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool isPair(char open,char close){
    if(open == '(' && close == ')')
        return true;
    else if(open == '[' && close == ']')
        return true;
    return false;
}
bool areBalanced(string exp){
    stack<char>sk;
    for(int i = 0; i < exp.length(); i++){
        if(exp[i] == '(' || exp[i] == '[')
            sk.push(exp[i]);
        else if(exp[i] == ')' || exp[i] == ']'){
            if(sk.empty() || !isPair(sk.top(),exp[i]))
                return false;
            else
                sk.pop();
        }
    }
    return sk.empty()?true:false;
}

int main()
{
    FIO
    int t;
    string s;
    cin >> t;
    getline(cin,s);
    while(t--){

        getline(cin,s);
        if(areBalanced(s))
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}
