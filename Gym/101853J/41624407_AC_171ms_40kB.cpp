#include<iostream>
#include <set>
#include <algorithm>
typedef long long ll;
using namespace std;
int maxAnswer(int a1,int a2){
    return a1 > a2 ? a1 : a2;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n); //sort the array from second element
        int answer = -1;
        int l = 0;
        for(int r = 0; r < n; r++){
            while(arr[r]-arr[l] > 1){
                l++;
            }
            answer = maxAnswer(answer,r-l+1);
        }
        cout << answer << endl;
    }
    return 0;
}
