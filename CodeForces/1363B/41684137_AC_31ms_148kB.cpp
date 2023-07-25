#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0') count0++;
            else            count1++;
        }
        int a = 0, b = 0;
        int ans = min(count0,count1);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                a++;
                count0--;
            }else{
                b++;
                count1--;
            }
            ans = min(ans,min(a,b)+min(count0,count1));
        }
        cout << ans << endl;
    }
    return 0;
}
