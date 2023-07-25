#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> v(2,vector<int>(n));
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < n; j++)
                cin >> v[i][j];
        int ans  = INT_MAX;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n;i++)
            sum1 += v[0][i];
        for(int i = 0; i < n;i++){
            sum1 -= v[0][i];
            ans = min(ans,max(sum1,sum2));
            sum2 += v[1][i];
        }
        cout << ans << endl;
    }
    return 0;
}
