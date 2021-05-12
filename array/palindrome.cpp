#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
	char a[n+1];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	
	}
	int i=0,j=n;
	while(i<j){
		if(a[i]!=a[j])
		cout<<"false";
		else
		cout<<"true";
		i++;
		j--;
	}
	return 0;
}
