#include<bits/stdc++.h>
using namespace std;

void soln(){
    int n,temp,i;
    vector<int> a;
    vector<int> b;
    unsigned long long sum1=0,sum2=0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        a.push_back(temp);
        sum1+=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        b.push_back(temp);
        sum2+=temp;
    }
    unsigned long long min1 = *min_element(a.begin(),a.end());
    unsigned long long min2 = *min_element(b.begin(),b.end());
    min1*=n;min2*=n;
    sum1+=min2;
    sum2+=min1;
    cout<<min(sum1,sum2)<<endl;
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