#include <iostream>
#include <time.h>
#include <chrono>
#include <iomanip>
using namespace std;
typedef long long ll;
int main()
{
//    cout << calculate_sum(1,2) << "\n" << calculate_sum_better(1,2);
//    TT();

    int n;
    cin >> n;
    int Numbers[n];
    int prefix[n+1];
    for(int k = 0; k < n; k++){
        cin >> Numbers[k]; //1 4 1
    }
    int q;
    cin >> q;
    int sum = 0;
    int i,j;
    prefix[0] = Numbers[0];
    for(int i = 0; i < n+1; i++){
        prefix[i] = prefix[i-1] + Numbers[i];
    }
    for(int k = 0; k < q; k++){
        cin >> i >> j;
        if(i != 0)
            cout << prefix[j] - prefix[i-1];
        else
            cout << prefix[j];
    }

    return 0;
}
