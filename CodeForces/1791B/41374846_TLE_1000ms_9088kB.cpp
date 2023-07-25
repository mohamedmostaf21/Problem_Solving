#include <iostream>
#include <cmath>
using namespace std;
#define xRef 1
#define yRef 1
int main()
{
    int testCases;
    int n;
    bool arrive = false;
    char arr[n];
    int xCordinate = 0;
    int yCordinate = 0;
    cin >> testCases;
    while(testCases-- > 0){
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            if(arr[i] == 'U')
                yCordinate += 1;
            else if(arr[i] == 'D')
                yCordinate -= 1;
            else if(arr[i] == 'R')
                xCordinate += 1;
            else if(arr[i] == 'L')
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
        xCordinate = 0;
        yCordinate = 0;
        arrive = false;
    }
    return 0;
}

