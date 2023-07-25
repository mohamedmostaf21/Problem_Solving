
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   
	int n,k;
	cin >> n >> k;
	//1 0 0 1 1 0 1
	int countZeros = 0;
	  int l = 0;
	  int maxSubSeq = 0;
	int* arr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	for(int i = 0; i < n; i++){
		if(arr[i] == 0)
			countZeros++;
		while(countZeros > k){
			if(arr[l] == 0)
				countZeros--;
			l++;
		}
		maxSubSeq = max(maxSubSeq, i - l + 1);
	}
	cout  << maxSubSeq << endl;
	delete [] arr;
    return 0;
 
}