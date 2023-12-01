#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
ll fact(int n,int k){
    double result =1;
    for (int i = 0; i < k; i++)
        result = result*(n-k+i)/i;
    
    return result;
}
void sol(){
    int n,m;
    cin>>n>>m;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    ll factorial[n+1];
    factorial[0]=1;
    for (int i = 1; i <= n; i++)
    {
        factorial[i]= factorial[i-1]*i % m;
    }
    //factorial
    for (int i = 0; i <= n; i++)
    {
        cout<<factorial[i]<<" ";
    }
    
    while (m--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        for (int j = l; j <=r; j++)
        {
            ll temp = factorial[j-l+r]/(factorial[k]*factorial[j-l-k+r]%m)%m;
            arr[j-1]+=temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main()
{
       sol();
    return 0;
}