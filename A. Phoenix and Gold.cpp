#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1; t<=T; t++)
    {
        int a=0;
        int m,n;
        int arr[m];
        scanf("%d%d",&m,&n);
        for(int i=0; i<m; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<m; i++)
        {
            a+=arr[i];
        }
        if(a!=n)
        {
            printf("YES\n");
            for(int i=0; i<m; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
        else if(a==n)
            printf("NO\n");
    a=0;
    }

}
