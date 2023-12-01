#include<bits/stdc++.h>
using namespace std;

void solution(int n){
	int r;
	if(n>0){
		r = n%2;
		solution(n/2);
		cout<<r;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		solution(n);
		cout<<endl;
	}
	return 0;
}