#include <iostream>
#include <string>
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
    string str;
    cin >> str;
    //QAQAQYSYIOIWIN
    //QAQ
    int n = str.length();
     int count = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'A'){
            int  left = 0, right = 0;
            for(int j = i-1; j >= 0; j--)
                if(str[j] == 'Q')  left++;
            for(int j = i+1; j < n; j++)
                if(str[j] == 'Q')  right++;
            count += left*right;
        }

    }
    cout << count;

    return 0;
}