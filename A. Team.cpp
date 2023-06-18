#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int a,b,c,d=0;
        scanf("%d%d%d",&a,&b,&c);
        if(a==1&&b==1||a==1&&c==1||b==1&&c==1||a==1&&b==1&&c==1)
        {
            d++;
        {
            if(d>=1)
            {
                e++;
            }
            else
            {
                e=0;
            }
        }
    }
    }
    printf("%d\n",e);
    return 0;
}
