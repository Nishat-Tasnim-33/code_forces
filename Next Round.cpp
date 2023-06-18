#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,c=0;
    scanf("%d",&n);
    int arr[n+1];
    scanf("%d",&b);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    if(n==b)
    {
        printf("1");
    }
    else if(arr[b]<b)
    {
        printf("0");
    }
    else if(arr[b]>=b && arr[b+1]>=b)
    {
        printf("%d",b+1);
    }
    else if(arr[b]>=b && arr[b+1]<b)
    {
        printf("%d",b);
    }

    return 0;
}
