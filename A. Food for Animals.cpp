#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c,x,y,cnt;
        cin>>a>>b>>c>>x>>y;
        if(a>=x && b>=y)
        {
            cout<< "YES"<<endl;
        }
        else if(a<=x && b<=y)
        {
            cnt=c-((x-a)+(y-b));
            if(cnt>=0)
            {
                cout<< "YES"<<endl;
            }
            else
            {
                cout<< "NO"<<endl;
            }
        }
        else if(a<x && b>=y)
        {
            cnt=c-(x-a);
            if(cnt>=0)
            {
                cout<< "YES"<<endl;
            }
            else
            {
                cout<< "NO"<<endl;
            }
        }
        else if(a>=x && b<y)
        {
            cnt=c-(y-b);
            if(cnt>=0)
            {
                cout<< "YES"<<endl;
            }
            else
            {
                cout<< "NO"<<endl;
            }
        }
    }
    return 0;
}
