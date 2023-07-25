#include <iostream>
#include <cstring>
#include <cmath>
#include <bits/stdc++.h>
#include <limits.h>
typedef long long ll;
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		int minDiff = INT_MAX;
		int sum = 0;
	
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		for(int i = 0; i < n; i++){
			int diff = abs(arr[i]-arr[i+1]);
			minDiff = min(minDiff,diff);
			sum += arr[i];
		}
		cout << minDiff << " " << sum/minDiff << endl;
	}

	
	return 0 ;
}
 