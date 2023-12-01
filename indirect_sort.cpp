#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int j,k;
		if (n&1==1)
		{
			n>>=1;
			cout<<++n<<endl;
			--n;
			if (n>0)
			{
				j=2;k=6;
				while(n--){
				cout<<j<<" "<<k<<"\n";
				j+=6;k+=6;
				}
				cout<<++k<<" "<<++k<<endl;
			}
			else
				cout<<"1 2"<<endl;
		}
		else
		{
			n>>=1;
			cout<<n<<endl;
			j=2;k=6;
			while(n--){
				cout<<j<<" "<<k<<"\n";
				j+=6;k+=6;
			}
		}
	}
	return 0;
}