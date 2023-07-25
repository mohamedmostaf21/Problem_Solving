#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hh = 21;
    int mm = 00;
    int rem ,div;
    int K;
    cin >> K;
    if(K >= 0 && K < 60){
        mm += K;
    }else if(K >= 60){
        rem = K % 60;
        div = K / 60;
        hh += div;
        mm += rem;
    }
    cout << hh << ":" << setfill('0') << setw(2)<< mm;
    return 0;
}
