#include<bits/stdc++.h>
using namespace std;

void soln(){
    int n,x;
    cin>>n>>x;

    string s;
    cin>>s;

    int count = 0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            i+=(x-1);
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        soln();
    }
return 0;
}