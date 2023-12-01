#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n;
        string s;
        cin>>n>>s;
 
        set<int> z;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '0')
                z.insert(i);
        }
 
        ll int ans = 0;
 
        for(int i=n-1; i>=0; i--)
        {
            if(s[i] == '1')
            {
                if(ans==-1 || !z.size())        ans = -1;
                else
                {
                    ans += i - *z.rbegin();
                    s[*z.rbegin()] = '1';
                    z.erase(--z.end());
                }
            }
            else if(z.size() && *z.rbegin()==i)
                z.erase(i);
 
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
}