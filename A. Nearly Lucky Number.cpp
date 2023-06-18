#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int cnt=0;
    int siz = str.size();
    if(siz==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='7'||str[i]=='4')
            {
                continue;
            }
            else
            {
                cnt++;
                break;
            }
        }
        if(cnt>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
