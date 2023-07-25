#include <iostream>
using namespace std;

int main()
{
    float x;
    cin >> x;
    int integer = x;
    float fraction = x - integer;
    if(fraction >= 0 && fraction < 0.5)
        cout << integer;
    else if(fraction >= 0.5)
        cout << (integer+1);


    return 0;
}
