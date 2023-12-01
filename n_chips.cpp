#include <bits/stdc++.h>
using namespace std;
using ll = int long long;
void soln(ll data){
    ll l=0,h=data;ll mid;
    while (l<=h)
    {
        mid = (l+h)/2;
        ++mid;

        if((mid*mid)>=data)
            h=mid-1;
        else
            l=mid+1;
    }
    cout<<--mid<<endl;
}

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        ll data;
        cin>>data;
        soln(data);
    }
    return 0;
}