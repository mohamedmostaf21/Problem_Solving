#include <bits/stdc++.h>
using namespace std;
#define Fifo ios_base ::sync_with_stdio(false);cin.tie(NULL);
int main(){
  Fifo
  int t; cin >> t;
  queue<int> q;
  while(t--){
      int x; cin >> x;
      if(x == 1){
          cin >> x;
          q.push(x);
      }
      else if(x == 2){
          if(!q.empty())
            q.pop();
      }
      else{
          if(q.empty()) cout << "Empty!\n";
          else cout << q.front() << endl;
      }
  }
  return 0;
}
