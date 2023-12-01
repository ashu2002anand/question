#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
ll fact_coefficient(int n,int k){
    ll factorial[n+1];
    factorial[0]=1;
    for (int i = 1; i <= n; i++)
    {
        factorial[i]=(factorial[i-1]* i % mod);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<factorial[i]<<" ";
    }
    
    ll ans = (factorial[n]/(factorial[n-k]*factorial[k] % mod))%mod;
    return ans;
}
int main(){
    int t;
    while (t--)
    {
        int n,r;
        cin>>n>>r;
        cout<<fact_coefficient(n,r)<<endl;
    }
    return 0;
}
