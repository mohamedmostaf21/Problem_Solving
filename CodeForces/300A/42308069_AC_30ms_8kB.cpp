#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> zero;
    vector <int> positive;
    vector <int> negative;

    int no_of_elements, starting_of_zero;
    cin >> no_of_elements;

    vector <int> element(no_of_elements);
    for(int i = 0; i < no_of_elements; i++)
        cin >> element[i];

    sort(element.begin(),element.end());

    if(element.back() > 0)
    {
        positive.push_back(element.back());
        element.pop_back();

        negative.push_back(element.front());

        starting_of_zero = 1;
    }
    //-3 -2 -1 0
    else
    {
        positive.push_back(element[0]);
        positive.push_back(element[1]);

        negative.push_back(element[2]);

        starting_of_zero = 3;
    }

    for(int i = starting_of_zero; i < element.size(); i++)
            zero.push_back(element[i]);

    cout << "1 " << negative.back() << '\n';

    cout << positive.size() << " ";
    for(int i = 0; i < positive.size(); i++)
        cout << positive[i] << " ";

    cout << '\n' << zero.size() << " ";
    for(int i = 0; i < zero.size(); i++)
        cout << zero[i] << " ";

    return 0;
}
