#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int longest = 1;
    int result = 1;
    for(int i = 1; i < str.length(); i++){
       if(str[i-1] != str[i]){
            longest = 0;
       }
       longest++;
       result = max(result,longest);
    }
    cout << result;
    return 0;
}
