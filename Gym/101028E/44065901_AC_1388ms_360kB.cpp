#include <iostream>
#include <cstring>
#include <cmath>
#include <bits/stdc++.h>
#include <limits.h>
typedef long long ll;
using namespace std;
#define MAX_SIZE 100000
int gcd(int a, int b)
{
    int res = ((a < b) ? a : b);
    while (res > 0) {
        if (a % res == 0 && b % res == 0) {
            break;
        }
        res--;
    }
 
    
    return res;
}
int main()
{
 	int n,m;
 	int a[MAX_SIZE];
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        int sum=0;
        cin>>n;
        cin>>a[1];
        num=a[1];
        sum+=a[1];
        for(int i=2;i<=n;i++)
        {

            cin>>a[i];
            sum+=a[i];
            num= gcd(a[i],num);
        }
        cout<<num<<" "<<sum/num<<endl;
    }
    return 0;
}
 