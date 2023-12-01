#include <bits/stdc++.h>
using namespace std;

void rprint(int n){
	if(n>0){
		rprint(n-1);
		cout<<n<<endl;
	}
	else
		return;
}

int main(){
	int t;
	cin>>t;
	rprint(t);
	return 0;
}