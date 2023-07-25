#include <iostream>

using namespace std;

int main()
{
    int weight;
    cin >> weight;
    if(weight < 4 || weight%2 == 1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
