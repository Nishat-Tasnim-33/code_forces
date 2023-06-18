#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=1,c=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(a+b==n)
            break;
    }
    if(n==1)
        printf("0\n");
    else
    printf("%d\n",abs((b-1)+b-2));
    return 0;
}
