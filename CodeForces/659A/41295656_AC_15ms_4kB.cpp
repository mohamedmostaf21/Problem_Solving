#include <iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    a--;
    a += 100*n;
    a += b;

    cout << a%n + 1;

    return 0;
}
