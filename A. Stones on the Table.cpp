#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,c=0;
    scanf("%lld",&n);
    char st[n];
    scanf("%s",&st);
    for(int i=0; i<n; i++)
    {
        if(st[i]==st[i+1])
        {
            c++;
        }
        else
        {
            continue;
        }
    }
    printf("%lld\n",c);
    return 0;
}
