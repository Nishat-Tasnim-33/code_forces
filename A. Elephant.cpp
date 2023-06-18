#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a==1)
    {
        cout<<1<<endl;
    }
    if(a==2)
    {
        cout<<1<<endl;
    }
    if(a==3)
    {
        cout<<1<<endl;
    }
    if(a==4)
    {
        cout<<1<<endl;
    }
    if(a>4)
    {
        int g=0,b;
            b=a/5;
            g=a%5;
            if(g>0&&g<5)
            {
                b=b+1;
            }
            cout<<b<<endl;

    }
        return 0;
    }
