#include<bits/stdc++.h>
using namespace std;


void nishat(int n)
{
    string str;
    map<string,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        mp[str]++;
            if(mp[str]==1)
            {
                cout<< "OK"<<endl;
            }
            else if(mp[str]>1)
            {
                cout<<str<< mp[str]-1<<endl;
            }
    }
}

int main()
{
    int siz;
    cin>>siz;
    nishat(siz);
    return 0;
}

