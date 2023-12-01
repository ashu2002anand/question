#include <bits/stdc++.h>
using namespace std;

void sol(){
	int n,k,q;
	cin>>n>>k>>q;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if (arr[i]<=q)
		{
			arr[i]=1;
		}
	}

	int p1=0,p2=0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]==0)
		{
			
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		sol();
	}
	return 0;
}