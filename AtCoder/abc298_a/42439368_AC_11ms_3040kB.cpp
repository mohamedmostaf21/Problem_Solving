#include <iostream>

using namespace std;

int main()
{
    int n,good=0,poor=0;
    string str;
    cin>>n>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='o')
            good++;
        else if(str[i]=='x')
            poor++;
    }
    if(good>0&&poor==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
