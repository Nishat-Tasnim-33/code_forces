#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[10001];
    cin>>st;
    int b=st[0];
    //cout<<b<<endl;
    if(b>=97)
    {
        st[0]=st[0]-32;
        cout<<st<<endl;
    }
    else
        cout<<st<<endl;
}
