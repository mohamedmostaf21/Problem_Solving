#include <iostream>
#include <algorithm>
#include <string>


using namespace std;


int main() {
    int n;
    cin >> n;
    int perum = 1;
    int* L = new int[n];
    int i,j;
	if(n == 1){
		cout << 1;
		return 0;
	}
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
    for(i = 0; i < n; i++){ 
       if(abs(L[i] - L[i+1]) == 1 || n == 4){
            cout << "NO SOLUTION";
            break;
       }else {
            for(i = 0; i < n; i++)
                cout << L[i] << " ";
       }
    }
	delete [] L;
    return 0;
}