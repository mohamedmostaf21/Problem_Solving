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
    prefix[0] = Numbers[0];
    for(int k = 1; k < n+1; k++){
        prefix[k] += prefix[k-1] + Numbers[k];
    }
    int q;
    cin >> q;
    int i,j;
    while(q--){
        cin >> i >> j;
        if(i != 0)
            cout << prefix[j] - prefix[i-1] << endl;
        else
            cout << prefix[j] << endl;
    }

    return 0;
}
