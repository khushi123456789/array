#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	
	}
	int curr;
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
		
	curr+=a[i];
	if(curr<0)
	{
		curr=0;
	}
//	int maxsum=max(curr,maxsum);
if(curr>maxsum)
maxsum=curr;
	}
	cout<<maxsum;
	return 0;
}
