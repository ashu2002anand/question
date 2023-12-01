#include<bits/stdc++.h>
using namespace std;

void soln()
{
    int n,i,count=0;
    cin>>n;
    int w,e;
    cin>>w>>e;

    for( i=1;i<n;i++){
        int w1,e1;
        cin>>w1>>e1;

       if(w1>=w && e1>=e)
       {
            count++;
            break;
       }
    }
    (count==0) ? cout<<w<<endl : cout<<"-1"<<endl;
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