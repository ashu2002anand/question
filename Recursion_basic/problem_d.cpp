#include<bits/stdc++.h>
using namespace std;

using int = int long long;

void recursion(int n){
	static int m =n;

	int r;
	
	if(m==0){
		cout<<"0";
		return;
	}
	
	if(n==0)
		return;

	r= n%10;
	recursion(n/10);
	cout<<r<<" ";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		recursion(n);
		cout<<endl;
	}
	return 0;
}