#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    long long int po[t];
    for(long long int i=0;i<t;i++)
    {
        cin>>po[i];
    }
    for(long long int i=0;i<t;i++)
    {
      if(po[i]>10)
        {
            continue;
        }
        else
        {
            cout<<'A'<<'['<<i<<']'<<" = "<<po[i]<<endl;
        }
    }

}
