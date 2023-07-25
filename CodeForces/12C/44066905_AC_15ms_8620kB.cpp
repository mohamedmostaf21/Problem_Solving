#include <iostream>
#include <stack>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

const int N = 1e6 + 5;

int num[N];
int vis[N]; 
stack<int> S1;
stack<int> S2;
int cmp(int a,int b){
	return a > b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	map<string,int>mp;
	int a[100005],b[100005];

  	int n,m;
  	cin >> n >> m;
  	for(int i = 0; i < n; i++)
  		cin >> a[i];
  	string s;
  	mp.clear();
  	for(int i = 0; i < m; i++){
  		cin >> s;
  		++mp[s];
	  }
	map<string,int>::iterator it = mp.begin();
	int x = 0;
  	for(;it != mp.end(); it++)
		b[x++] = it->second;
	sort(b,b+x,cmp);
	sort(a,a+n);
	int minn = 0;
	int maxx = 0;
	for(int i = 0; i < x; i++){
		minn += b[i]*a[i];
		maxx += b[i]*a[n-1-i];
	}
	cout << minn << " " << maxx;
    return 0;
}