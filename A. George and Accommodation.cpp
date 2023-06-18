#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a=0, b=0;
        cin>>a>>b;
        if(a<b)
        {
            if((b-a)>=2)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
