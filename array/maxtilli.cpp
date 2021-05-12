#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	
	}
	int ma=-1;
	for(int i=0;i<n;i++){
		if(a[i]>ma)
		ma=a[i];
			
	 a[i]=ma;
	}
		for(int i=0;i<n;i++){
		cout<<a[i];
	
	}
	return 0;
}
