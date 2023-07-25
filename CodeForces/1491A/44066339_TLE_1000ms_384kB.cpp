#include <iostream>
#include <cstring>
#include <cmath>
#include <bits/stdc++.h>
#include <limits.h>
typedef long long ll;
using namespace std;
#define MAX_SIZE 100000
int gcd(int a, int b)
{
    int res = ((a < b) ? a : b);
    while (res > 0) {
        if (a % res == 0 && b % res == 0) {
            break;
        }
        res--;
    }
 
    
    return res;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 	int n,q;
 	cin >> n >> q;
 	int *arr = new int[n];
 
 	for(int i = 0; i < n; i++){
 			cin >> arr[i];
 
	 }
 	
 	
 
 	int x,k,t;
 	
	for(int i = 0; i < q; i++){
		cin >> t;
		if(t == 1){
			cin >> x;
			arr[x] =  1-arr[x-1];
		}
		else if(t == 2){
			cin >> k;
			sort(arr,arr+n,greater<int>());
			cout << arr[k-1] << endl;
		
		}
	}
 		
    return 0;
}
 