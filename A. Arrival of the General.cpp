#include<bits/stdc++.h>
using namespace std;

int main()
{
    int siz;
    cin>>siz;
    if(siz==1)
    {
        cout<<'0'<<endl;
    }
    else if (siz>1)
    {
        vector <int> vc;
        int value;
        for(int i=0; i<siz; i++)
        {
            cin>>value;
            vc.push_back(value);
        }
        /*int x,y,hold1,hold2;
        x=*max_element(vc.begin(),vc.end());
        y=*min_element(vc.begin(),vc.end());
        int cnt=0,cnt2=0;
        for(int i=0; i<siz; i++)
        {
            if(vc[i]==x)
            {
                hold1=i;
            }
        }
        for(int i=0; i<siz; i++)
        {
            if(vc[i]==y)
            {
                hold2=i;
            }

        }
        if(hold1>hold2)
        {
            hold2++;
            cout<<hold1+(siz-1)-hold2<<endl;
        }
        else
        {

            int maxi,mini;
            maxi=hold1-0;
            mini=(siz-1)-hold2;
            int add = maxi+mini;
            cout<<add<<endl;
        }*/
        int maxi=0,mini=50000;
        int maxind,minind;
        for(int i=0; i<siz; i++)
        {
            if(vc[i]>maxi)
            {
                maxind=i;
                maxi=vc[i];
            }
            if(vc[i]<=mini)
            {
                minind=i;
                mini=vc[i];

            }
        }
        if(maxind>minind)
        {
            cout<<(maxind-1)+(siz-minind)-1;
        }
        else
        {
            cout<<(maxind-1)+(siz-minind);

        }
    }
    return 0;
}

