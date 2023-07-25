#include <iostream>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int perum = 1;
    int L[n];
    int i,j;
    for(i = n, j = 0; i > 0; i--){
        perum *= i;
        if(i % 2 == 0){
            L[j] = i;
            j++;

        }
    }
    for(i = n; i > 0; i--){
        if(i % 2 == 1){
            L[j] = i;
            j++;
        }
    }
    for(i = 0; i < n-1; i++){
       if(abs(L[i] - L[i+1]) == 1){
            cout << "NO SOLUTION";
            break;
       }else {
            for(i = 0; i < n; i++)
                cout << L[i] << " ";
       }
    }

    return 0;
}



