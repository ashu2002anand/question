#include <bits/stdc++.h>
using namespace std;

long long LCM(int a,int b){
    int result = min(a,b);
    while (result>0)
    {
        if (a%result==0 && b%result==0)
        {
            break;
        }
        result--;
    }
    return (a*b)/result;
}

void solution(int n){
    int start =1;int end=n-1;int sol0,sol1;
    long long max = n*n;
    while (start<(n/2))
    {
        if (LCM(start,end)<max)
        {
            sol0=start;sol1=end;
            max=LCM(start,end);
        }
        start++;
        end--;
    }
    cout<<sol0<<" "<<sol1<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        solution(n);
    }
    return 0;
}