#include <iostream>

using namespace std;

int main()
{
    char C;
    cin >> C;
    if(C != 'z'){
        C++;
        cout << (char)C;
    }
    return 0;
}
