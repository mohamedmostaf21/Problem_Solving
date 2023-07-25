#include <bits/stdc++.h>
using namespace std;

int main(){
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
