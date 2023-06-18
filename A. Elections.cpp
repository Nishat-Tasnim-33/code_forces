#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void election()
{
    ll arry[3],big=0;
    for(int i=0; i<3; i++)
    {
        cin>>arry[i];
    }

    if(arry[0]==0 && arry[1]==0 && arry[2]==0)
    {
        arry[0]=1;
        arry[1]=1;
        arry[2]=1;
    }
    else
    {
        for(int i=0; i<3; i++)
    {
        if(arry[i]>big)
        {
            big=arry[i];
        }
    }
        for(int i=0; i<3; i++)
        {
            if(arry[i]==big)
            {
                arry[i]=0;
            }
            else
            {
                arry[i]=((big+1)-arry[i]);
            }
        }
    }
        for(int i=0; i<3; i++)
        {
            cout<<arry[i]<< ' ';
        }
        cout<<endl;
}


int main()
{
    ll t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        election();
    }
    return 0;
}
