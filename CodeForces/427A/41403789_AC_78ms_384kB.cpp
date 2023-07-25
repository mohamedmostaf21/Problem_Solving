#include <iostream>

using namespace std;

int main()
{
    int numOfEvents;
    cin >> numOfEvents;
    int events[numOfEvents];
    int hired = 0, unrated = 0;
    for(int i = 0; i < numOfEvents; i++){
        cin >> events[i];
        if(events[i] > 0){
            hired+=events[i];
            continue;
        }if(hired > 0 && events[i] < 0){
            hired-=1;
            continue;
        }if(events[i] < 0){
            unrated+=1;
        }

    }
    cout << unrated;
    return 0;
}
