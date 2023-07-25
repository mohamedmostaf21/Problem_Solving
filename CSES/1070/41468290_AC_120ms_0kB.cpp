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
	if(n == 4){
		   for (int i = 1; i <= n ; i++){
			     if(i % 2 == 0)
					 cout << i << " ";
		   }
		   for (int i = 1; i <= n ; i++){
			     if(i % 2 == 1)
					 cout << i << " ";
		   }
	  }
	else{
		for(i = 0; i < n-1; i++){ 
		   if(abs(L[i] - L[i+1]) == 1){
				cout << "NO SOLUTION";
				break;
		   }else{
				for(i = 0; i < n; i++)
					cout << L[i] << " ";
		   }
		}
	}
	delete [] L;
    return 0;
}


