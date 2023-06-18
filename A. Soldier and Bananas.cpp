#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, t, sum=0, a=1, b=0;
    scanf("%d%d%d",&k,&n,&w);
    for(t=1; t<=w; t++)
    {
        a=t*k;
        sum+=a;
    }
    if(sum<=n)
        printf("0\n");
    else if(sum>n)
    {
        int b= sum-n;
        printf("%d\n",b);
    }
    return 0;

}
