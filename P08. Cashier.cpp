#include<bits/stdc++.h>
using namespace std;

long long int solve()
{
    long long int n,l,a,b,c,d,e,f,sum=0;
    cin>>n>>l>>a;
    for(long long int i=0; i<n; i++)
    {
        cin>>e>>f;
        sum=e+f;
    }
    c=l-sum;
    if(c==0)
        return c;
    else
    {
        d=ceil(c/a);
        return d;
    }
}

long long int main()
{
    long long int k;
    k=solve();
    cout<<k<<endl;
}
