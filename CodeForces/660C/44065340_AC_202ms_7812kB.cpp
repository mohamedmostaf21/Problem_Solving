#include <iostream>
#include <cstring>

using namespace std;

const int MAXN = 1000005;

int n, k, p;
int a[MAXN], sum[MAXN];

bool judge(int mid) {
    int i, j;
    for (i = 0; i + mid - 1 < n; i++) {
        if (sum[i + mid - 1] - sum[i - 1] + k >= mid) {
            p = i;
            return true;
        }
    }
    return false;
}

int main() {
    int i, j;
    cin >> n >> k;
    memset(sum, 0, sizeof(sum));
    for (i = 0; i < n; i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    int l = 0, r = n + 1, mid;
    p = -1;
    while (l < r - 1) {
        mid = (l + r) / 2;
        if (judge(mid))
                l = mid;
        else
                r = mid;
    }
    cout << l << endl;
    for (i = 0; i < p; i++)
        cout << a[i] << " ";
    for (i = p; i < p + l; i++)
        cout << "1 ";
    for (i = max(p + l, 0); i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    
    return 0;
}