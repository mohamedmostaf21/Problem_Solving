#include <iostream>
#include <string>

using namespace std;

main(){
    int m,li,ri,count=0;
    string s;
    cin >> s;
    int n = s.size();
    int arr[100005];
    for(int i=1;i<n;i++){

        if(s[i]==s[i-1])
            count++;

        arr[i]= count;
    }
    cin >> m;
    while(m--){
        cin >> li >> ri;
        cout<<arr[ri-1]-arr[li-1]<<endl;
    }

}
