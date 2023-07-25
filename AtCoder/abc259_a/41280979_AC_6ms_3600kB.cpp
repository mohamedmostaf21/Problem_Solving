#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N,M,X,T,D;
    cin >> N >> M >> X >> T >> D;
    int BH = T - (D * X);

    if(M < N && M >= X) //doesn't change
        cout << T;
    else
        cout << (BH + M * D);
    return 0;
}
