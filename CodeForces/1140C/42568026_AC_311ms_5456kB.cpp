#include <bits/stdc++.h>
#define N 300010
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef pair<int,int> p;
typedef long long ll;

p song[N];
void attemptAdd(int c);
ll n,k,sum,ans;
priority_queue<int,vector<int>,greater<int>> q;
int main()
{
    FIO
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> song[i].second >> song[i].first;

    sort(song,song+n);

    for (int i = n-1; i >= 0; i--){
        attemptAdd(song[i].second);
        ans=max(ans,sum*song[i].first);
    }

    cout << ans << "\n";
    return 0;
}

void attemptAdd(int c){
    q.push(c);
    sum += c;
    if (q.size() > k){
        sum -= q.top();
        q.pop();
    }
}
