#include <bits/stdc++.h>
using namespace std;
void solution(int n,int arr[],int sum){
    int sum_total=0,j=0;
    for (int i = 0; i < n; ++i)
    {
        sum_total+=arr[i];
    }
    sum_total+=sum;
    for (int i = 0; i<=sum_total; ++i)
    {
        j+=i;
        if (j==sum_total)
        {
            cout<<"YES"<<endl;
            return;
        }
        else if (j>sum_total)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,sum;
        cin>>m>>sum;
        int arr[m];
        for (int i = 0; i < m; ++i)
        {
            cin>>arr[i];
        }
        solution(m,arr,sum);
    }
    return 0;
}