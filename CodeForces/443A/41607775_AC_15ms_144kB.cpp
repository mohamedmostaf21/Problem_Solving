#include<iostream>
#include <set>

using namespace std;
int main(){
    set<char> c;
    string s;
    int i;
    getline(cin, s);
    while(s[i]){
        if(isalpha(s[i])) //is alphabetic or not
            c.insert(s[i]); //insert it into set
        i++;
    }
    cout<<c.size();
    return 0;
}
