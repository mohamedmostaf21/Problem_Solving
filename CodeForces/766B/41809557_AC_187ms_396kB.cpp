#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int a[26];
char str[105];

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)  cin >> arr[i];
	sort(arr,arr+n);
	bool flag = false;
	for(int i = 2; i < n; i++){
        if(arr[i] < arr[i-1] + arr[i-2])
            flag = true;
	}
    if(flag)
        cout << "YES";
    else
        cout << "NO";



	return 0;
}
