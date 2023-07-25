#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 1e5 + 5;

int n, m, l[N], r[N], cnt[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        cin >> l[i] >> r[i];
        cnt[l[i]]++;
        cnt[r[i] + 1]--;
    }

    for (int i = 1; i <= n; ++i) {
        cnt[i] += cnt[i - 1];
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (cnt[i] == m) {
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}