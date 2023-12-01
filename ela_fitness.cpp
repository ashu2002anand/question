#include <bits/stdc++.h>
using namespace std;

void countfreq(int arr[],int n){
	vector<bool> visited(n,false);
	for (int i = 0; i < n; ++i)
	{
		if (visited[i]==true)
		{
			continue;
		}

		int count = 1;
		for (int j = 0; j < n; ++j)
		{
			if (arr[j]==arr[i])
			{
				count++;
			}
		}
		cout<<arr[i]<<" "<<count<<endl;
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];//={1,2,2,1,4};
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	countfreq(arr,5);
	return 0;
}