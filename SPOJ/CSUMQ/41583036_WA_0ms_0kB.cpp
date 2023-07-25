#include <iostream>
#include <time.h>
#include <chrono>
#include <iomanip>
using namespace std;
typedef long long ll;

int main()
{
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
    while(q--){
        cin >> i >> j;
        if(i != 0)
            cout << prefix[j] - prefix[i-1] << endl;
        else
            cout << prefix[j] << endl;
    }

    return 0;
}
