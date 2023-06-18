#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>coins;
    int n,c=0,sum2=0,sum1=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int in;
        cin>>in;
        coins.push_back(in);
        sum1+=coins[i];
    }
    sum1=sum1/2;
    sort(coins.begin(),coins.end());
    for(int i=n-1; i>=0; i--)
    {
        sum2+=coins[i];
        c++;
        if(sum2>sum1)
        {
            break;
        }
    }
    cout<<c<<endl;
}
