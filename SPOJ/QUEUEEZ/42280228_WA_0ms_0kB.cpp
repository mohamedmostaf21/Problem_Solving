#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    queue<int>q;
    while(t--){
        int choice;
        ll n;
        cin >> choice;
        switch(choice){
            case 1:
                cin >> n;
                q.push(n);
                break;
            case 2:
                if(q.empty())
                    q.pop();
                break;
            case 3:
                if(!q.empty()){
                        cout << q.front() << endl;
                }else
                    cout << "Empty!"<< endl;
                break;
        }
    }

    return 0;
}
