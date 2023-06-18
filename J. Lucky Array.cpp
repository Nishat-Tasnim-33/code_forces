#include<bits/stdc++.h>
using namespace std;

map<long long int,long long int>freq;

int main()
{
    long long int n,c;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);

    }
    long long int x=500000;
    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        x=min(arr[i],x);
    }
    if(freq[x]%2==0)
    {
        printf("Unlucky\n");
    }
    else
        printf("Lucky\n");
    return 0;
}
