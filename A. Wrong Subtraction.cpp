#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,t;
    scanf("%d%d",&a,&b);
   for(int i=1; i<=b; i++)
    {
        if(a%10!=0)
        {
            a=a-1;
        }
        else if(a%10==0)
        {
            a=a/10;
        }
    }
    printf("%d\n",a);
    return 0;
}
