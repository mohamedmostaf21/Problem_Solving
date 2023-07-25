#include <iostream>
#include <vector>
using namespace std;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    FIO
    int t;
    cin >> t;
    int a = 100,b = 100;
    int xa,xb,xal,xbl;

    while(t--){
        string stra,strb;
        cin >> stra;
        cin >> strb;
        a = 100, b = 100;
        xa = xb = 0;
        xal = xbl = 1;
        for(int i = 0; i < stra.length(); i++){
            if(stra[i] == 'X')
                xa++; //3
            if(stra[i] == 'S')
                xal = -1;
            if(stra[i] == 'L')
                a = 200;
            if(stra[i] == 'M')
                a = 150;
        }
         for(int i = 0; i < strb.length(); i++){
            if(strb[i] == 'X')
                xb++;//1
            if(strb[i] == 'S')
                xbl = -1;
            if(strb[i] == 'L')
                b = 200;
            if(strb[i] == 'M')
                b = 150;
        }
        a += xa*xal; //97
        b += xb*xbl; //99
        if(a > b)
            cout << ">\n";
        else if(a < b)
            cout << "<\n";//<
        else
            cout << "=\n";

    }
	return 0;
}
