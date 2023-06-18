#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch[1000000];
        cin>>ch;
        int cnt=0;
        int b = strlen(ch);
        for(int i=0; i<b; i++)
        {
            cnt++;
        }
        if(cnt<=10)
        {
            cout<<ch<<endl;
        }
        else
        {
            cout<<ch[0]<<b-2<<ch[b-1]<<endl;
        }
    }
    return 0;
}

