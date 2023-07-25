#include <iostream>
#include <string>
typedef long long ll;
using namespace std;

int main(){
    int n, count = 0;
    ll sum1 = 0,sum2 = 0;
    cin >> n;
    ll arr[n];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sum1+= arr[i];
    }
    for(int i = 1; i < n; i++){
        sum2 += arr[i];
        if(sum2+sum2 == sum1) count++;
    }
    cout << count;


    return 0;
}

