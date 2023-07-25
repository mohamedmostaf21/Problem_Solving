#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
   cin >> a >> b >> c;
        int xx,yy;
        xx=c/a;
        yy=c/b;
        int i, j = 0;
        for(int i = 0; i <= xx; i++){
            if((c-a*i)%b == 0){
                j = 1;
                break;
            }
        }
        if(j == 1)
            cout << "Yes";
        else
            cout << "No";
   

    return 0;
}
