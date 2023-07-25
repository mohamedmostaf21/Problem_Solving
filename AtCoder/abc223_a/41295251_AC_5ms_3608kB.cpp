#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a <= 1000 && a >= 100){
        if(a % 100 == 0)
            cout << "Yes";
        else
            cout << "No";
    }else
        cout << "No";
    return 0;
}