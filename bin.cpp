#include <bits/stdc++.h>
using namespace std;

#define const  1e9

using ll = unsigned long long int;

int solution(ll data){
	data+=data;
	ll low = 1,high	= data;
	ll m,sol;
	while(low<=high){
		m =(low+high)/2;

		if((m*(m-1)) >= data){
			sol = m;
			high=m-1;
		}
		else
			low	=m+1;
	}
	return sol;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll data;
		cin>>data;
		cout<<solution(data)<<endl;
	}
	return 0;
}