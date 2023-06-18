#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,cnt=0,cnt2;
    cin>>num;
    while(num--)
    {
        map<int,int > freq;
        int siz;
        cin>>siz;
        int arry[siz];
        for(int i=0; i<siz; i++)
        {
            cin>>arry[i];
        }
        for(int i=0; i<siz; i++)
        {
            freq[arry[i]]++;
        }
        int cnt=0, ar;
        for(auto i: freq)
        {
            if(i.second>=3)
            {
                cnt++;
                ar=i.first;
                break;
            }

        }
        if(cnt>=1){
            cout<<ar<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
    return 0;
}

