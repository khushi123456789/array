#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	
	}
	int l=0,h=n-1;
	while(l<k){
		if(a[l]+a[h]==k)
		cout<<a[l]<<" "<<a[h];
	else if(a[l]+a[h]>k)
	h--;
	else 
	l++;	
     
	}
	return 0;
}
