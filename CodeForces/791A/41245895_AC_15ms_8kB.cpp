#include <iostream>

using namespace std;

int main()
{
    int a,b,counter;
    cin >> a >> b;
    for(counter = 0; a <= b; counter++){
        a *= 3;
        b *= 2;
    }
    cout << counter;
    return 0;
}
