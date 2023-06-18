#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,c;
    cin >>n>>c;
    ll arry[n];
    for(int i=0; i<n; i++)
    {
        cin>>arry[i];
    }
        ll t=0;
        for(int i=0; i<n-1; i++)
        {
            t=max(t,arry[i]-arry[i+1]-c);
        }
        cout<<t<<endl;
    return 0;
}
