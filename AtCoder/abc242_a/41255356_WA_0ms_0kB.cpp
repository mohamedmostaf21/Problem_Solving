#include <iostream>

using namespace std;

int main()
{
    int A,B,C,X;
    cin >> A >> B >> C >> X;
    if(X > A && X <= B)
        printf("%.12lf",(double)C/(B - A));
    else if(X <= A)
        printf("%.12lf",(double)X);
    else if(X > B)
         printf("%.12lf",(double)0);
    return 0;
}
