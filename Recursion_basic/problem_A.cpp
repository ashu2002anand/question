#include <bits/stdc++.h>
using namespace std;

void recursion(int n)
{
	while(n>0){
		cout<<"I love Recursion"<<endl;
		return recursion(--n);
	}
}

int main()
{
	int n;
	cin>>n;
	recursion(n);
	return 0;
}