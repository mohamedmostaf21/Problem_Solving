#include <iostream>
#include <stack>
#include <string>
using namespace std;

const int N = 1e6 + 5;

int num[N];
int vis[N]; 
stack<int> S1;
stack<int> S2;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string str;
    cin >> str;
    str = "(" + str + ")";

    int cnt = 0;
    int tot = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '(') {
            vis[++cnt] = 0;
        } else if (str[i] == ')') {
            vis[++cnt] = -1;
        } else {
            while (true) {
                if (str[i] == '(' || str[i] == ')') {
                    i--;
                    vis[++cnt] = tot;
                    tot = 0;
                    break;
                }
                tot = tot * 10 + str[i] - '0';
                i++;
            }
        }
    }

    S1.push(0);
    S2.push(0);
    for (int i = 2; i <= cnt; ++i) {
        if (vis[i] != 0 && vis[i] != -1) {
            num[vis[i]] = S1.top();
            S1.push(vis[i]);
        } else if (vis[i] == 0) {
            S2.push(0);
        } else if (vis[i] == -1) {
            S1.pop();
            S2.pop();
        }
    }

    for (int i = 1; i < n; ++i) {
        cout << num[i] << " ";
    }
    cout << num[n] << "\n";

    return 0;
}