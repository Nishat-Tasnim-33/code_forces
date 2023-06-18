#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll arry[n];
    for(int i=0; i<n; i++)
    {
        cin>>arry[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        if(i==0)
        {
            break;
        }
        cout<<arry[i]<< ' ';
    }
    cout<< arry[0]<<endl;
    return 0;
}
