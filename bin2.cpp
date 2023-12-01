#include<bits/stdc++.h>
using namespace std;

void solution(){
	int n;
	cin>>n;
	int A[n],B[n];

	for (int i = 0; i < n; ++i)
	{
			cin>>A[i];
	}
	for (int i = 0; i < n; ++i)
	{
			cin>>B[i];
	}

	int Amax_temp=1,Amax=1,Aterm=A[0];int Bmax_temp=1,Bmax=1,Bterm=B[0];

	for (int i = 1; i < n; ++i)
	{
		if(A[i]==A[i-1]){	
			Amax++;
		}
		else if(A[i]!=A[i-1]){
			if(Amax>=Amax_temp){
				Amax_temp=Amax;
				Aterm=A[i-1];
			}
			Amax=1;
		}
		
		if(B[i]==B[i-1]){
			Bmax++;
		}
		else if (B[i]!=B[i-1]){
			if (Bmax>=Bmax_temp){
				Bmax_temp=Bmax;
				Bterm=B[i-1];
			}
			Bmax=1;
		}
	}

	if(Amax>Amax_temp){
		Amax_temp=Amax;
		Aterm=A[n-1];
	}

	if (Bmax>Bmax_temp){
		Bmax_temp=Bmax;
		Bterm=B[n-1];
	}

	for (int i = 1; i < n; ++i)
	{
		if (A[i]==A[i-1] && A[i]==Bterm)
		{
			++Bmax_temp;
		}
		if (B[i]==B[i-1] && B[i]==Aterm)
		{
			++Amax_temp;
		}
	}

	cout<<max(Amax_temp,Bmax_temp)<<endl;
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--)
		solution();

	return 0;
}