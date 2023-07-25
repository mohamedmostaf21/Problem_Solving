#include <iostream>
#include <queue>
using namespace std;
#define Fifo ios_base ::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    Fifo
    int t;
    cin >> t;
    queue<int>q;
    while(t--){
        int choice;
        int n;
        cin >> choice;
        switch(choice){
        case 1:
            cin >> n;
            q.push(n);
            break;
        case 2:
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
