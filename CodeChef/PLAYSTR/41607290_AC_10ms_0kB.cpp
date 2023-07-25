#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <chrono>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s,r;
		cin >> s;
		cin >> r;
		int zerosS = 0, onesS = 0, zerosR = 0, onesR = 0;
		for (int i = 0; i < n; i++){
			if(s[i] == '0')
				zerosS++;
			else
				onesS++;
            if(r[i] == '0')
				zerosR++;
			else
				onesR++;
		}
		if(zerosS == zerosR && onesS == onesR)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

    return 0;
}

