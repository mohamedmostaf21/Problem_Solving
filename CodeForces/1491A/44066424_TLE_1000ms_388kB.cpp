#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x, k, t;

    for (int i = 0; i < q; i++) {
        cin >> t;
        if (t == 1) {
            cin >> x;
            arr[x - 1] ^= 1;
        } else if (t == 2) {
            cin >> k;
            nth_element(arr, arr + k - 1, arr + n, greater<int>());
            cout << arr[k - 1] << endl;
        }
    }

    delete[] arr;
    return 0;
}