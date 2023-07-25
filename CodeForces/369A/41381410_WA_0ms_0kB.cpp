#include <iostream>
#include <cmath>
using namespace std;
#define xRef 1
#define yRef 1
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int arr[n];
    int counter = 0;
    for(int i = 0; i < n; i++){
        int f;
        cin >> f;
        arr[i] = f;
    }
    for(int i = 0; i < n; i++){
       if(arr[i] == 1){
            m--;
       }else if(arr[i] == 2){
            if(m != 0)
                m--;
            else
                k--;
       }
    }
    int minNum = 0;
    for(int i = 0; i < n; i++){
       if(arr[i] == 1)
           minNum = abs(m);
       else if(arr[i] == 2)
           minNum = abs(m+k);

    }
    cout << minNum;
    return 0;
}




