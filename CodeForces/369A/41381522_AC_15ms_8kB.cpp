#include <iostream>
#include <cmath>
using namespace std;
#define xRef 1
#define yRef 1
int main()
{
    int n,m,k,t, wash = 0;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++){
       cin >> t;
       if(t == 1){
           if(m > 0)
                m--;
           else
            wash++;
       }else if(t == 2){
           if(k > 0){
                k--;
            }else{
                if( m > 0)
                    m--;
                else
                    wash++;
            }
       }
    }
    cout << wash;
    return 0;
}




