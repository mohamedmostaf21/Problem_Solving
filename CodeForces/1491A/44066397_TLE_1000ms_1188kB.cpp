#include <iostream>
#include <cstring>
#include <cmath>
#include <bits/stdc++.h>
#include <limits.h>
typedef long long ll;
using namespace std;




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x, k, t;

    priority_queue<int> max_heap(arr, arr + n);

    for (int i = 0; i < q; i++) {
        cin >> t;
        if (t == 1) {
            cin >> x;
            arr[x - 1] = 1 - arr[x - 1];
            max_heap = priority_queue<int>(arr, arr + n);
        } else if (t == 2) {
            cin >> k;
            priority_queue<int> temp_heap = max_heap;
            for (int j = 0; j < k - 1; j++) {
                temp_heap.pop();
            }
            cout << temp_heap.top() << endl;
        }
    }

    delete[] arr;
    return 0;
}