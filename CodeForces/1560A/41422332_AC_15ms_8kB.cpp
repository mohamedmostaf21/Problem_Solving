#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    int count = 1;
    int arr[1000];
    for(int i = 1; i <= 1666; i++){
        if(i % 3 != 0 && i % 10 != 3)
           arr[count++] = i; //1,2,4,5,7,8,10,11,14,16....
           //3,6,9,12,13,15... doesn't print
    }
    int n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
}
