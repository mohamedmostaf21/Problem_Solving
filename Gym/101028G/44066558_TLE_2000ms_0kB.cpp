#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int h, w, d;
        cin >> h >> w >> d;

        int t = 2 * w - 2; 
        h %= t;

        if (w != 2) {
            if (h == d || h == 2 * w - d) {
                
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            if ((h == 0 && d == 2) || (h == 1 && d == 1)) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}