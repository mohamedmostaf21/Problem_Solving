#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,m,a;
    cin >> n >> m >> a;
    int needed = ceil((double)n/a) + ceil((double)m/a);
    cout << needed;
    return 0;
}
