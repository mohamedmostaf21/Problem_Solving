#include <iostream>
#include <cstring>
typedef long long ll;
using namespace std;
using namespace std;
const int MAX = 2e5 + 5;
ll n;
ll biao[MAX];
int cnt;
bool isDiv(ll x) {
  
	  for(ll i = 2; i*i<=x; i++) {
	    if(x%i==0) return 0;
	  }
	  return 1 ;
}
void fenjie(ll x) {
	  for(ll i = 2; i*i<=x; i++) {
	    if(x%i == 0 && isDiv(i)) {
	      while(x%i==0) biao[++cnt]=i,x/=i;
	    }
	    if(cnt>=2) break;
	  }
	  
	  if(x>1) biao[++cnt]=x;
}
int main()
{
	  cin>>n;
	  if(n==1 || isDiv(n)) {
	    cout  << "1\n";
	    cout << "0\n" ;
		return 0 ;
	  }
	  fenjie(n);
	  if(cnt == 2 && biao[1]*biao[2] == n) {
	    cout  << "2\n";
	  }
	  else {
	    cout  << "1\n";
	    cout << biao[1]*biao[2];
	  }
	  return 0 ;
 }
 