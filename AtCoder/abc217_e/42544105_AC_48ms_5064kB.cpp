#include <iostream>
#include <deque>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long  ll;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    FIO
    queue<long long>elements;
    priority_queue<long long, vector<long long>, greater<long long>> temp;
    int times;
    cin >> times;
    while (times--)
    {
        int op;
        cin >> op;
        if(op==1)
        {
            long long x;
            cin>>x;
            elements.push(x);
        }
        else if(op == 2)
        {
            if(temp.empty())
            {
                temp.push(elements.front());
                elements.pop();
            }
            cout<<temp.top()<<"\n";
            temp.pop();
        }
        else
        {
            while(!elements.empty())
            {
                temp.push(elements.front());
                elements.pop();
            }
        }
    }
    return 0;
}
