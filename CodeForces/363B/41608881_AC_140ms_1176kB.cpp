#include<iostream>
#include <set>
typedef long long ll;
using namespace std;
int main(){
   	int  n,k;
	cin>>n>>k;
    ll arr[n+8]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i){
			arr[i]=arr[i-1]+arr[i];
		}
	}

 
	int min= INT_MAX;
    ll minindex=0;
	for(int i=0;i<=n-k;i++){
        ll sum=0;
		if(!i){
			sum=arr[i+k-1];
 			if(sum<=min){
				min=sum;
				minindex=i;
			}
			
		}
		else {
			sum=arr[i+k-1]-arr[i-1];
 
			if(sum<=min){
				min=sum;
				minindex=i;
			}
		}
	
	}
	cout<<++minindex; 
	return 0;
}
