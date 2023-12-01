#include<bits/stdc++.h>
using namespace std;
//using int = unsigned int;
using ll = int long long;
void soln()
{
    ll n,x;
    cin>>n>>x;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    
    ll sum =0;
    ll l,h,i,height;
    l= *min_element(a.begin(),a.end());
    h = *max_element(a.begin(),a.end());
    h+=x;
    /*
    for(i=l;i<=h;i++){
        height = i;sum=0;
        for(int j =0;j<n;j++){
            if( (height - a[j]) < 0)
                sum+=0;
            else
                sum+=(height-a[j]);
        }
        if(sum==x)
        {
            cout<<height<<endl;
            return;
        }
        else if(sum>x){
            cout<<--height<<endl;
            return;
        }
    }
    */
   ll mid,ans;

   while (l<=h)
   {
        mid = (l+h)/2;
        sum=0;
        for(int j =0;j<n;j++){
            if ((mid-a[j]) < 0)
            {
                continue;
            }
            else
                sum+=(mid-a[j]);
        }

        if(sum<=x){
            ans=mid;
            l=mid+1;
        }
        else
            h=mid-1;
   }

    cout<<ans<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
        soln();
    }
    return 0;
}