#include <iostream>
#include <stack>
using namespace std;
typedef long long  ll;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main()
{
    FIO
    int noOfMessages;
    cin >> noOfMessages;
    stack<string>stk;
    while(noOfMessages--){
        string chatFriend;
        cin >> chatFriend;
        stk.push(chatFriend);

    }


    int size = stk.size();
    string temp[size];
    int count = 0;

    //The stack elements are copied into a temporary array
    while (!stk.empty()) {
        temp[count++] = stk.top();
        stk.pop();
    }

    // Remove duplicates from the temporary array
    for (int i = 0; i < count; i++) {
        for (int j = i+1; j < count; j++) {
            if (temp[i] == temp[j]) {
            //Duplicate elements are marked with -1
                temp[j] = "-1";
            }
        }
    }

    //Non-duplicate elements are pushed back onto the stack
    for (int i = count-1; i >= 0; i--) {
        if (temp[i] != "-1") {
            stk.push(temp[i]);
        }
    }

    while(!stk.empty()){
        cout << stk.top() << '\n';
        stk.pop();
    }
    return 0;
}
