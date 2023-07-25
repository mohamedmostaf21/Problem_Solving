#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;
    string str = "";
    if(n <= 3 && n > 1 || n == 4){
        cout << "NO SOLUTION";
        return 0;
    }
    for(int i = n; i >= 1; i--){
        if(i % 2 == 0){
            cout << i << " ";
        }else{
            str += to_string(i) + " ";
        }
    }
    cout << str;
    return 0;
}
