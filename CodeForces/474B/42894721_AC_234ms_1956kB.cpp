#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int a0 = 1;
    int a1 = 0;
    vector<pair<int,int>>piles;
    for(int i = 0; i < n; i++){
        a1 += arr[i];
        piles.push_back({a0,a1}); //1,a1
        a0 = a1+1; //10
    }
    cin >> m;
    int *q = new int[m];
    for(int i = 0; i < m; i++)
        cin >> q[i];
    for(int i = 0; i < m; i++){
        int low = 0, high = n -1, mid;
        while(low <= high){
            mid = (low + high) / 2;
            if(q[i] >= piles[mid].first && q[i] <= piles[mid].second)
                cout << mid+1 << "\n";
            if(q[i] <  piles[mid].first)
                high = mid - 1;
            else
                low  = mid + 1;
        }
    }


    delete [] arr;
    delete [] q;
    return 0;
}
