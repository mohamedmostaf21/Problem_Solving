#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
char* lower_string(char* str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			str[i] = str[i] + 32;         //converting uppercase to lowercase
	}
	return str;
}
void remove_duplicates(char *string)
{
  int length = strlen(string);
  bool char_found[256] = {false};
  int j = 0;
  for (int i = 0; i < length; i++)
  {

    if (!char_found[string[i]])
    {
      char_found[string[i]] = true;
      string[j] = string[i];
      j++;
    }
  }
  string[j] = '\0';
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char* s = new char[n];
        cin >> s;
        char* f = lower_string(s);
        remove_duplicates(f);
        bool flag = false;
        for(int i = 0 ;i < strlen(f); i++){
            if(f[i] == 'm' && f[i+1] == 'e' && f[i+2] == 'o' && f[i+3] == 'w' && strlen(f) == 4){
                flag = true;
                break;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
