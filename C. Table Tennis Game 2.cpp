#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll k,a,b,result=0;
    cin>>k>>a>>b;
    if(a<k&&b<k)
    {
        cout<< "-1"<<endl;
    }
    else if(k<a&&k<b)
    {
        cout<<(a+b)/k<<endl;
    }
    else
    {
        if(a>b)
        {
            result=(k/a);
        }
        else
        {
            result=(k/b);
        }
        cout<<result<<endl;
    }
    return 0;
}
