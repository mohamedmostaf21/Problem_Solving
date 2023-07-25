#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    string str1,str2;
    cin >> t;
    while(t--){
    	bool flag = false;
        cin >> str1 >> str2;
       transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
       transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
       int len = max(str1.length(), str2.length());
       char c;
       for(int i = 0; i < len; i++){
            if(str1[i] == 'b' && str2[i] == 'p' || str1[i] == 'p' && str2[i] == 'b'){
                str1[i] = str2[i]; 
			}
               
            else if(str1[i] == 'i' && str2[i] == 'e' || str1[i] == 'e' && str2[i] == 'i'){
            	 str1[i] = str2[i]; 
			}
               
       }
       if(str1.compare(str2) == 0)
       		cout << "Yes" << endl;
    	else
    		cout << "No" << endl;
    }

    return 0;
}