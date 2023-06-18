#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
vector<ll>b;
int main()
{
    ll n,k;
    cin>>n>>k;
    {
        for(ll i=1; i<=n; i+=2)
        {
            b.push_back(i);
        }
        for(ll i=2; i<=n; i+=2)
        {
            b.push_back(i);
        }
       cout<< b[k-1] <<endl;

    }
    return 0;
}
