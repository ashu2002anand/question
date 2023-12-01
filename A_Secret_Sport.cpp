#include<bits/stdc++.h>
using namespace std;

void soln(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnta=0,cntb=0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='A')
        {
            cnta++;
        }
        else
        {
            cntb++;
        }
    }
    cout<<cnta<<" "<<cntb<<endl;

    if(cnta>cntb)
        cout<<"A"<<endl;
    else if(cntb>cnta)
        cout<<"B"<<endl;
    else
        cout<<"?"<<endl;

    return;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        soln();
    }
return 0;
}