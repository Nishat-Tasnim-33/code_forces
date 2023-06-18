#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,a=0,b=0;
    cin>>n;
    int arry[n];
    for(int i=0; i<n; i++)
    {
        cin>>arry[i];
    }
    sort(arry,arry+n);
    for(int i=0; i<n; i++)
    {
        cout<<arry[i];
    }
    return 0;
}
