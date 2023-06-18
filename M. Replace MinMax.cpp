#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,big=-500000,biggi=-1,sim=500000,simi=-1,temp1=0,temp2=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>big)
        {
            big=arr[i];
            biggi=i;
        }
        if(arr[i]<sim)
        {
            sim=arr[i];
            simi=i;
        }

    }
    arr[simi]=big;
    arr[biggi]=sim;
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}


