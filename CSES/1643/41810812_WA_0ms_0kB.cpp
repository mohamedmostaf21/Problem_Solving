#include <limits.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxLeft,maxRight;
// Find the maximum possible sum in arr[] such that arr[m]
// is part of it
int maxCrossingSum(int arr[], int l, int m, int h)
{
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= l; i--) {
        sum = sum + arr[i];
        if (sum > left_sum){
            left_sum = sum;
            maxLeft = i;
        }
    }
    sum = 0;
    int right_sum = INT_MIN;
    for (int j = m+1; j <= h; j++) {
        sum = sum + arr[j];
        if (sum > right_sum){
            right_sum = sum;
            maxRight = j;
        }
    }
    int maxSum = left_sum + right_sum;
    return (maxLeft,maxRight,maxSum);
}
// Returns sum of maximum sum subarray in aa[l..h]
int maxSubArraySum(int arr[], int l, int h)
{
    if (l == h)
        return (l,h,arr[l]);
    else{
        int m = floor((l + h) / 2);
        int L = maxSubArraySum(arr, l, m);
        int R = maxSubArraySum(arr, m + 1, h);
        int C = maxCrossingSum(arr, l, m, h);
        if(L >= R && L >= C)
        return L;
        else if(R >= L && R >= C)
        return R;
        else
        return C;
    }
}
int main()
{

    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)  cin >> arr[i];
    int max_sum = maxSubArraySum(arr, 0, n - 1);
    cout << max_sum;
    delete[]arr;
    return 0;
}
