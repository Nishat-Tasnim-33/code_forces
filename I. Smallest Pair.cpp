#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;
    scanf("%lld",&T);
    for(int t=1; t<=T; t++)
    {
        long long int n,a=0,small=5000000;
    scanf("%lld",&n);
    long long int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            a=arr[i]+arr[j]+j-i;
            if(a<small)
            {
                small=a;
            }
        }
    }
    printf("%lld\n",small);
    }
    return 0;

}

