#include <iostream>
using namespace std;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    FIO
	int t;
	cin >> t; //number of test cases
	int count = 0;
	while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x != 0)
                count+=1;
        }
        cout << count << '\n';
        count = 0;
	}

	return 0;
}
