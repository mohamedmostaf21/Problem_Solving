#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;

int main()
{
    ll n,m,a;
    cin >> n >> m >> a;
    ll needed = ceil((double)n/a) * ceil((double)m/a);
    cout << needed;
    return 0;
}
