#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool a=0;
    int arry[13]={4,7,44,47,74,77,444,474,447,477,744,747,777};
    for(int i=0; i<13; i++)
    {
        if(n%arry[i]==0)
        {
            a=true;
        }
    }
    if(a)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
