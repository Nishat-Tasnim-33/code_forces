#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll aryy[4],cunt=0;
    set<ll>cnt;
    for(int i=0; i<4; i++)
    {
        cin>>aryy[i];
    }
    for(int i=0; i<4; i++)
    {
        cnt.insert(aryy[i]);
    }
    ll cntsize= cnt.size();
    cout<<(4-cntsize)<<endl;
    return 0;
}
