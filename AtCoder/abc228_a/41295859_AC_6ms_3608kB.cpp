#include <iostream>
using namespace std;

int main()
{
    int s,t,x;
    cin >> s >> t >> x;
    if(s > t){
        if((s < x && s < 24) || (0 < x && x < t) || s == x)
            cout << "Yes";
        else
            cout << "No";
    }else{
        if(s < x && x < t)
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}