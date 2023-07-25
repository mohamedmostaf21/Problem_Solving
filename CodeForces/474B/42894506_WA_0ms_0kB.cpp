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
    for(int i = 0; i < n; i++){
        cout << "pile number(" << i+1 << ") : [" << piles[i].first << "," << piles[i].second <<  "]\n";


    }
    cin >> m;
    int* arr2 = new int[m];
    for(int i = 0; i < m; i++)
        cin >> arr2[i];
    for(int i = 0; i < m; i++){
        int pileIndex = 0;
        for(int j = 0; j < n; j++){
            if(arr2[i] >= piles[j].first && arr2[j] <= piles[j].second)
                pileIndex = j+1;
        }
        cout << pileIndex << "\n";
    }


    delete [] arr;
    delete [] arr2;
    return 0;
}
