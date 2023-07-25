#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[5][5];
    int xCordinate,yCordinate;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                xCordinate = i;
                yCordinate = j;
            }
        }
    }
    int min_no_of_moves = abs(xCordinate - 2) + abs(yCordinate - 2);
    cout << min_no_of_moves;
    return 0;
}
