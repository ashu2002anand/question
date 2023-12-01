#include <bits/stdc++.h>
using namespace std;

void rec(int arr[],int n,int i)
{
	int r;
	while(i<n){
		r = arr[i];
			
		rec(arr,n,i+=2);
			cout<<r<<" ";
	}
	return;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	rec(arr,n,0);
	cout<<endl;
	return 0;
}