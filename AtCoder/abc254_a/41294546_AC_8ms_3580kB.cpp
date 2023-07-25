#include <iostream>

using namespace std;

int main()
{
    int N,ones_digit,tens_digit;
    cin >> N;
    ones_digit = N % 10;
    N /= 10;
    tens_digit = N % 10;
    cout << tens_digit << ones_digit;

    return 0;
}
