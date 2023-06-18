#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            c=a/b;
        }
        else if(b>a)
        {
            c=b/a;
        }
        else if(a==b)
        {
            c=1;
        }
        printf("%d\n",ceil(c));
    }
}
