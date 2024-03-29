#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxSubArraySum(ll a[], int size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here  += a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++)   cin >> arr[i];

    ll max_sum = maxSubArraySum(arr, n);
    cout << max_sum;
    return 0;
}
