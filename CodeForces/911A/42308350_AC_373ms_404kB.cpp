#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{

    int no_of_elements;
    cin >> no_of_elements;
    vector<int>integers(no_of_elements);
    int minu = INT_MAX;
    for(int i = 0; i < no_of_elements; i++){
        cin >> integers[i];
        minu = min(minu,integers[i]);
    }
    int min_dst = INT_MAX;
    int last_index = -1;
    for(int i = 0; i < no_of_elements; i++){
        if(integers[i] == minu){
            if(last_index == -1){
                last_index = i;
                continue;
            }else{
                min_dst = min(min_dst,i-last_index);
            }
            last_index = i;
        }
    }
    cout << min_dst;
    return 0;
}
