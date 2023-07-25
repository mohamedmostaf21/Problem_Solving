
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<vector>
#include<set>
#include<string>
#include<cmath>
#include<cstring>
#include<ctime>
#define ll long long
#define pb push_back
#define pm make_pair
using namespace std;
const int MAX = 2e5 + 5;
int n,k1,k2;
deque<int> a,b;
int main()
{
  cin>>n;
  cin>>k1;
  for(int x,i = 1; i<=k1; i++) {
    scanf("%d",&x);a.pb(x);
  }
  cin>>k2;
  for(int x,i = 1; i<=k2; i++) {
    scanf("%d",&x);b.pb(x);
  }
  if(k1 == 0) return 0 * printf("0 2\n");
  if(k2 == 0) return 0 * printf("0 1\n");
  int i;
  int flag = 0;
  for(i = 1; i<=10000000; i++) {
    int aa = a.front();a.pop_front();
    int bb = b.front();b.pop_front();
    if(aa > bb) {
      a.pb(bb);a.pb(aa);
    }
    else {
      b.pb(aa);b.pb(bb);
    }
    if(a.empty() || b.empty()) {
      flag = 1;break;
    }
    //printf("a : %d b : %d\n",a.size(),b.size());
  }
  if(a.empty()) {
    printf("%d %d\n",i,2);
  }
  if(b.empty()) {
    printf("%d %d\n",i,1);
  }
  if(i > 10000000) printf("-1\n");
  return 0 ;
 }