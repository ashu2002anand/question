#include <stdio.h>
int main(){
    int n,x,l,r,m;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    l=0;r=n-1;
    while (l<=r)
    {
        m=(l+r)/2;
        if (arr[m]==x)
        {
            r=l;
            break;
        }
        else if (x>arr[m])
        {
            l=m+1;
        }
        else
            r=m-1;
    }
    if (l==r)
    {
        printf("element found at %d index \n",m+1);
    }
    else
        printf("Element not found\n");

        
    return 0;
}