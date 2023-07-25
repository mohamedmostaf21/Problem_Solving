#include <iostream>

using namespace std;

int main()
{
    int n,x,a,b;
    bool flag(true);
    cin >> n >> x;
    while(n--){
        cin >> a >> b;
        if(x == a|| x == b|| x == 7-a|| x == 7-b){
            flag = false;
        }
        x = 7 - x;
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
