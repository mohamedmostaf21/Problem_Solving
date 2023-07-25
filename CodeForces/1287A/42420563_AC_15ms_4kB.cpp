#include <iostream>
#include <vector>
using namespace std;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    FIO
    int n,t;
    string str;
    cin>>t;
    while(t--){
         cin>>n>>str;
         int tmp=0,ans=0;
        for(int i=n-1;i>=0;--i){
             if(str[i]=='A'){
                 ans=max(ans,tmp);
                 tmp=0;
             }else{
                 tmp++;
             }
         }
         cout<<ans<<endl;
    }

	return 0;
}
