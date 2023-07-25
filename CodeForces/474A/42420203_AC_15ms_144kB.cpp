#include <iostream>
#include <vector>
using namespace std;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    FIO
    char input;
	char arr[] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
   vector<char>v;
    cin >> input;
    string str;
    cin >> str;
    int j = 0;
    int len = str.length();
    while(len--){
        char c = str[j];
        if(input == 'R'){
            for(int  i = 0; i < sizeof(arr)/sizeof(char); i++){
                if(c == arr[i])
                    v.push_back(arr[i-1]);

            }
        }
        else if(input == 'L'){
            for(int  i = 0; i < sizeof(arr)/sizeof(char); i++){
                if(c == arr[i])
                     v.push_back(arr[i+1]);
            }
        }
        j++;

    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
	return 0;
}
