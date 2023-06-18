#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,b=0,d,e,f,k;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        f=n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                for(int l=i; l<=j; l++)
                {
                    d=i+j;
                    d=__gcd(n,d);
                    while(d>1)
                    {
                        if(d==1)
                        {
                            b+=d;
                            k=n+d;
                            n=k;
                        }
                    }
                }
            }
            e=f+b;
        }
        cout<<e<<endl;
    }
    return 0;
}
