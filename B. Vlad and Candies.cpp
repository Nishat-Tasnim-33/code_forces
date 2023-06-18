#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int siz;
        cin>>siz;
        vector <int> arry;
        for(int i=0; i<siz; i++)
        {
            int value=0;
            cin>>value;
            arry.push_back(value);
        }
        sort(arry.begin(),arry.end());
        if(siz==1 && arry[siz-1]>1)
        {
            cout<< "NO"<<endl;
        }
        else if(siz==1 && arry[siz-1]==1)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            if((arry[siz-1]-arry[siz-2])>1)
            {
                cout<< "NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
