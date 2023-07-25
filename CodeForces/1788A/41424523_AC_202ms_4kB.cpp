#include <iostream>
using namespace std;
void sequance(){
     int n;
     cin >> n;
        int arr[n+1];
        for(int i = 1; i <= n; i++){
            cin >> arr[i]; //1 1 1 1
        }
        for(int i = 1; i <= n; i++){ //4 1 1 1 1
            int in = 0,out = 0;
            for(int j = 1; j <= i; j++){
                if(arr[j] == 2) in++;
            }
            for(int j = i+1; j <= n; j++){
                if(arr[j] == 2) out++;
            }
             if(out == in){
                cout << i << endl;
                 return;
            }
        }

        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
       sequance();
    }


    return 0;
}

