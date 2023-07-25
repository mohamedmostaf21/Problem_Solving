#include <iostream>
#include <cmath>
using namespace std;
#define long long ll
int main()
{
    ll n,m,a;
    cin >> n >> m >> a;
    ll needed = ceil((double)n/a) + ceil((double)m/a);
    cout << needed;
    return 0;
}
