#include <iostream>
#include <cmath>
using namespace std;
#define xRef 1
#define yRef 1
int main()
{
    int testCases;
    bool arrive = false;
    cin >> testCases;
    for(int i = 0; i < testCases; i++){
        int xCordinate = 0;
        int yCordinate = 0;
        int n;
        cin >> n;
        char arr[n];

        for(int j = 0; j < n; j++){
            char c;
            cin >> c;
            arr[j] = c;
        }

        for(int j = 0; j < n; j++){
            if(arr[j] == 'U')
                yCordinate += 1;
            else if(arr[j] == 'D')
                yCordinate -= 1;
            else if(arr[j] == 'R')
                xCordinate += 1;
            else if(arr[j] == 'L')
                xCordinate -= 1;
            if(xCordinate == xRef && yCordinate == yRef){
                arrive = true;
                break;
            }
        }
        if(arrive)
            cout << "YES\n";
        else
            cout << "NO\n";
        arrive = false;
    }
    return 0;
}




