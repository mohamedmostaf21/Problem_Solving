#include<iostream>
#include <set>
#include <algorithm>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, sum = 0;
        cin >> n;
        int arr[n];
        for(int i = 1; i<=n ; i++){
            cin >> arr[i];
        }

        for(int i = 1; i<=n ; i++){
            for(int j = i+1; j<=n ; j++){
                sum += arr[i]*arr[j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}
