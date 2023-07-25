
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   
 
    string s; 
	cin >> s;
  	int l = s.length();
 
    bool ans = true; 
	int k = 0;
 
    for(int i = l - 1 ;i > -1; i--)
    {
        if(s[i] != 'a')
            break;
        else
            k++;
    }
    
    for(int i = 0;i < s.length(); i++)
    {
        if(s[i] != 'a')
            break;
        else
            k--;
    }
 
    string s2 = "";
    for(int i = 0;i < k; i++)
        s2 += "a";
 
    s.insert(0, s2);
    s2 = s; 

	reverse(s2.begin(), s2.end());
    if(s == s2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
 
}