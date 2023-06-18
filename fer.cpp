#include<bits/stdc++.h>

using namespace std;
vector<int>kom;
map<long long int,long long int>freq;

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=0; t<T; t++)
    {
        int n,c;
        scanf("%d",&n);
        int arry[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arry[i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
               c=(arry[j]&&arry[j+1]);
               kom.push_back(c);
            }
        }
        long long int a=10000000;
        int b;
        for(int i=0; i<kom.size(); i++)
        {
            freq[arry[i]]++;
            if(a>freq[i])
            {
                a=freq[i];
                b=i;
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
