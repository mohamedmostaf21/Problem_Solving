#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int min_no_of_steps = n / 2 + n % 2;
    while(min_no_of_steps <= n){
        if(min_no_of_steps % m == 0)
            break;
        min_no_of_steps++;
    }
    cout << (min_no_of_steps > n ? -1 : min_no_of_steps);
    return 0;
}
