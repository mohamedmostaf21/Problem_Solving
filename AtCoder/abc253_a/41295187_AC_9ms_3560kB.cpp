#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(b >= a && b <= c || b >= c && b <= a){
        cout << "Yes";
    }else
        cout << "No";
    return 0;
}
