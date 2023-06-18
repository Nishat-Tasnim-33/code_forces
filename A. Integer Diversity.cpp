#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,c=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arry[n];
        for(int i=0; i<n; i++)
        {
            cin>>arry[i];
        }
        vector<ll>vc;
        if(n==1)
        {
            cout<< "0"<<endl;
        }
        else if(n==2)
        {
            if(arry[0]==arry[1])
            {
                cout<< "1"<<endl;
            }
            else
            {
                cout<< "2"<<endl;
            }
        }
        else{
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arry[i]==arry[j])
                {
                    vc.push_back((arry[i]));
                }
            }
        }
        for(int i=0; i<vc.size(); i++)
        {
            if(vc[i]==vc[i+1])
            {
                c++;
            }
        }
        cout<<vc.size()<<c<<endl;
        int a = n-c;
        cout<<a<<endl;
        }
    }
    return 0;
}
