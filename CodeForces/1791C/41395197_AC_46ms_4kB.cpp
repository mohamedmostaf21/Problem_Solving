#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,counter = 0;
    cin >> t;
    while(t-- > 0){
        cin >> n;
        char arr[n];
        for(int i = 0; i< n; i++){
            char c;
            cin >> c;
            arr[i] = c;
        }
        counter = n;
        for(int i = 0; i< n/2; i++){

            if((arr[i] == '1' && arr[n-1-i] == '1') || (arr[i] == '0' && arr[n-1-i] == '0')){
                break;
            }
            else if((arr[i] == '0' && arr[n-1-i] == '1') || (arr[i] == '1' && arr[n-1-i] == '0')){
                counter -= 2;
            }
        }
        cout << counter << endl;
    }
    return 0;
}




