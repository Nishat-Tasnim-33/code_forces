#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
    a1=a+b+c;
    a2=a*b*c;
    a3=a+(b*c);
    a4=(a*b)+c;
    a5=a*(b+c);
    a6=(a+b)*c;
    int out= max(a6,max(a5,max(a4,max(a3,max(a2,a1)))));
    cout<<out<<endl;
    return 0;
}
