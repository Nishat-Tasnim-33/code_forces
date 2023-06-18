#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void Sum(ll a)
{
    cout << (-a+1) << ' '<< a<<endl;
}

int main()
{
    ll t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        ll a;
        cin>>a;
        Sum(a);
    }
    return 0;
}
