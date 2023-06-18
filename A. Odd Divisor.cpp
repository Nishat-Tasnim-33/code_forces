#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void odd()
{
    ll t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        ll x=0;
        cin>>x;
        while(x%2==0)
        {
            x/=2;
        }
        if(x==1) cout<< "NO"<<endl;
        else cout<< "YES" <<endl;
    }
}

int main()
{
    odd();
    return 0;
}
