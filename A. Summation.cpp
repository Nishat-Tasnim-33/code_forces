#include<bits/stdc++.h>
using namespace std;

int main()
{
    int long long t,b=0;
    cin>>t;
    int long long ar[t];
    for(int long long i=0;i<t;i++)
    {
        cin>>ar[i];
        b+=ar[i];
    }
    cout<<abs(b)<<endl;
    return 0;
}
