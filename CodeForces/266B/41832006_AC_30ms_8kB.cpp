#include<cstdio>
#include<cstring>
#include<stack>
#include<iterator>
#include<queue>
#include<cmath>
#include<set>
#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    int no_of_people, time;
    string school_queue;
    cin >> no_of_people >> time >> school_queue;

    for(int i = 1; i <= time; i++)
    {
        for(int person = 0; person < no_of_people; person++)
        {
            if(school_queue[person] == 'B' && school_queue[person + 1] == 'G')
            {
                swap(school_queue[person], school_queue[person + 1]);
                person++;
            }
        }
    }

    cout << school_queue;
    return 0;
}
