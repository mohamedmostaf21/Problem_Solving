#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;


int main()
{
    int n;
    cin >> n;
    int* arr = new int [n];
    for(int i = 0; i < n; i++)   cin >> arr[i];
    //5 10 2 3 14 5
    sort(arr,arr+n);
    int counter =  0;
    int diff = 0;
    for(int i = 0; i < n;i+=2){
        for(int j = i; j < i+2; j++){
            diff = arr[j] - diff;
        }
        counter += diff;
        diff = 0;
    }
    cout << counter;
    return 0;
}
