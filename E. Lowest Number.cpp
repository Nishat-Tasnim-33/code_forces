#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b=50000
    ,c;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]<b)
        {
            b=arr[i];
            c=i;
        }
    }
    cout<<b<<" "<<c<<endl;
    return 0;
}
