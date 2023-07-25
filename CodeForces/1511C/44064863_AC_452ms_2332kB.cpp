
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   
  	int n,q;
    cin>>n>>q;
    vector<int>cards(n);
    vector<int>qr(q);
    for(int i=0;i<n;i++)
    {
        cin>>cards[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>qr[i];
    }
    for(int i=0;i<q;i++)
    {
        int index = find(cards.begin(),cards.end(),qr[i])-cards.begin();
        cout<< index+1<< " ";
        rotate(cards.begin(),cards.begin()+index,cards.begin()+index+1);
    }
    return 0;
 
}