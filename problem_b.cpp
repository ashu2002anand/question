#include <bits/stdc++.h>
using namespace std;

void display(int n,int arr[]){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void solution(int n,int arr[]){
    int soln[n];soln[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (soln[i-1]>=arr[i] && arr[i]!=0)
        {
            cout<<"-1"<<endl;
            return;
        }
        else
            soln[i]=soln[i-1]+arr[i];
    }
    display(n,soln);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        solution(n,arr);
    }
    return 0;
}