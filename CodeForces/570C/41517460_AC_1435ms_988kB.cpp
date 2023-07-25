#include <iostream>

using namespace std;
typedef long long ll;



int main()
{

    int n,m,i,k;
    string str;
    cin >> n >> m >> str;
    k = 0;
     for(i = 1; i < str.length(); i++){
        if(str[i] == '.' && str[i-1] == '.')
            k++;
     }

     while(m--){
        int xi, j = 0;
        char ci;
        cin >> xi >> ci;
        if(ci == '.' && str[xi - 1] != '.'){
            if(xi - 2 >= 0){
                if(str[xi-2] == '.')
                    k++;
            }
            if(xi < str.size()){
                if(str[xi] == '.')
                    k++;
            }
        }
        if(ci != '.' && str[xi - 1] == '.'){
            if(xi - 2 >= 0){
                if(str[xi-2] == '.')
                    k--;
            }
            if(xi < str.size()){
                if(str[xi] == '.')
                    k--;
            }
        }
        str[xi - 1] = ci;
        cout << k << endl;

     }
    return 0;
}
