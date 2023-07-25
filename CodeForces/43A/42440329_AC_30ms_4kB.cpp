#include <iostream>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    FIO

    int noOfLines;
    cin >> noOfLines;
    map<string,int>noOfGoals;
    while(noOfLines--){
        string team;
        cin >> team;
        noOfGoals[team]++;
    }
    string winner;
    int max_goals = INT_MIN;
    map<string,int>::iterator it = noOfGoals.begin();
    for( ;it != noOfGoals.end(); it++){
        int noOfGoals = it->second;
        if(noOfGoals > max_goals)
        {
            max_goals = noOfGoals;
            winner = it->first;
        }
    }
    cout << winner;
	return 0;
}
