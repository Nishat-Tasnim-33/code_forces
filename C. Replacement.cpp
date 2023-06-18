#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    long long int arr[t];

    for(long long int i=0;i<t;i++)
    {
        cin>>arr[i];
    }

    for(long long int i=0;i<t;i++)
    {
        if(arr[i]>0)
        {
            arr[i]=1;
        }
        else if(arr[i]<0)
        {
            arr[i]=2;
        }

    }
    for(long long int i=0;i<t;i++)
    {
        cout<<arr[i]<<' ';

    }
    return 0;
}
