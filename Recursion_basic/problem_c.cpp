#include <bits/stdc++.h>
using namespace std;

void rprint(int n){
	if(n>1){
		cout<<n<<" ";
		rprint(n-1);
	}
	else
		cout<<1<<"\n";
}

int main(){
	int t;
	cin>>t;
	rprint(t);
	return 0;
}