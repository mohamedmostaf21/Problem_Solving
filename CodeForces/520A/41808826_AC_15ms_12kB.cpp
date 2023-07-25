#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int a[26];
char str[105];

int main() {
	int n;
	cin >> n;
    memset(a, 0, sizeof(a));
    cin >> str;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] <= 'z' && str[i] >= 'a') a[str[i] - 'a'] = 1;
        else if(str[i] <= 'Z' && str[i] >= 'A') a[str[i] - 'A'] = 1;
    }

    int ans = 0;
    for(int i = 0; i < 26; i++) 
        ans += a[i];

    if(ans == 26)
        cout << "YES";
    else
        cout << "NO";


	return 0;
}
