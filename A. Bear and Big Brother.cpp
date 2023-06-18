#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,b,c=0;
    cin>>l>>b;
    while(l<=b)
    {
        l=l*3;
        b=b*2;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
