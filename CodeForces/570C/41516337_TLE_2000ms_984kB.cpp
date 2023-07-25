#include <iostream>

using namespace std;

int main()
{
    int n,m,xi;
    char ci;
    string str;
    string ss;
    int count = 0;
    cin >> n >> m;
     cin >> str;
    for(int i = 0; i < m; i++){
           cin >> xi >> ci;
           str[xi-1] = ci;
            for(int j = 0; j < n; j++){
                ss = str.substr(j,2);
                if(ss == ".."){
                    ss = ".";
                    count++;
                }
            }

        cout << count << endl;
        count = 0;
    }



    return 0;
}
