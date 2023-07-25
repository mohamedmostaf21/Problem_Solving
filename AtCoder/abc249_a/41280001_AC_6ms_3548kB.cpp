#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D,E,F,X;
    cin >> A >> B >> C >> D >> E >> F >> X;
    int Takahashi_dist = 0;
    int Aoki_dist = 0;
    for(int i = 0; i < X; i++){
        if(i%(A+C) < A) //// Takahashi walks
            Takahashi_dist += B;
        if(i%(D+F) < D) //Aoki walks
            Aoki_dist += E;
    }
    if(Takahashi_dist > Aoki_dist)
        cout << "Takahashi";
    else if(Takahashi_dist < Aoki_dist)
        cout << "Aoki";
    else
        cout << "Draw";
    return 0;
}