#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int odd=0, even=0,cnt1=0;
        int siz;
        cin>>siz;
        int arry[siz];
        for(int i=0; i<siz; i++)
        {
            cin>>arry[i];
        }
        for(int i=0; i<siz; i+=2)
        {
            if(arry[i]%2==0)
            {
                odd++;
            }
            else
            {
                even++;
            }
            if(odd>0 && even >0)
            {
                cout<< "NO"<<endl;
                cnt1++;
                break;
            }
        }
        if(cnt1==0)
        {
            odd=0, even=0;
            for(int i=1; i<siz; i+=2)
            {
                if(arry[i]%2==0)
                {
                    odd++;
                }
                else
                {
                    even++;
                }
                if(odd>0 && even >0)
                {
                    cout<< "NO"<<endl;
                    cnt1++;
                    break;
                }
            }
        }
        if(cnt1<=0)
        {
            cout<< "YES"<<endl;
        }
    }
}
