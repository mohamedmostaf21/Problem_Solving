#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
#define Fifo ios_base ::sync_with_stdio(false);cin.tie(NULL);
int main()
{
	Fifo
    int no_of_children, no_of_candies_given;
    cin >> no_of_children >> no_of_candies_given;

    int maximum_turns = 0, last_child = 0;
    for(int i = 1; i <= no_of_children; i++)
    {
        int candy_i;
        cin >> candy_i;

        int no_of_turns = candy_i/no_of_candies_given + (candy_i%no_of_candies_given != 0);

        if(no_of_turns >=  maximum_turns)
        {
            maximum_turns = no_of_turns;
            last_child = i;
        }
    }

   cout << last_child;
    return 0;
}

