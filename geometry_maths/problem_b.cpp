//checking prime
#include <bits/stdc++.h>
using namespace std;

using lld = int long long;

bool ssol(lld n){
	for (lld i = 2; i*i <= n+1; ++i)
	{
		if (n%i==0)
			return false;
	}
	return true;
}

int main()
{
	lld n;
	cin>>n;
	if (ssol(n))
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}