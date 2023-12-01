#include<bits/stdc++.h>
using namespace std;

void soln(int n){
    if (n<=5)
    {
        cout<<"NO"<<endl;
        return;
    } 
    int a1,a2,a3=1;
    a1= (n-1)/2;
    a2 = n-a1-1;
    if(a1==a2){--a1;++a2;}
    
    while (a1%3==0 || a2%3==0)
    {
        --a1;++a2;
    }
    

    if(a1>1){
        cout<<"YES\n"<<a1<<" "<<a2<<" "<<"1"<<endl;
    }
    else cout<<"NO"<<endl;
    return;
}

int main(){
int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        soln(n);
    }
    return 0;
}   