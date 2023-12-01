#include <bits/stdc++.h>
using namespace std;

using lld = int long long;

bool sol(lld n)
{
	lld i = 2;
	if(n==1)
		return true;
	else{
		while(n>=i){
			if(n==i)
				return true;
			i*=2;
		}
	}
	return false;
}

int main()
{
	lld n;
	cin>>n;
	if (sol(n))
		cout<<"YES"<<"\n";
	else
		cout<<"NO"<<"\n";
	return 0;
}