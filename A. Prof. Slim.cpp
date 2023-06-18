#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int cnt=0;
        int cnt2=0;
        int cnt3=0;
        int cnt4=0;
        int cnt5=0;
        int siz;
        cin>>siz;
        int arry[siz];
        int newarry[siz];
        int newarry2[siz];
        for(int i=0; i<siz; i++)
        {
            cin>>arry[i];
            newarry[i]=arry[i];
        }
        /*for(int i=0; i<siz; i++)
        {
            cout<<arry[i]<<" ";
            cout<<newarry[i]<<" ";
        }*/
        for(int i=0; i<siz; i++)
        {
            newarry2[i]=-(arry[i]);
            if(newarry2[i]<0)
            {
                cnt++;
            }
        }
        if(cnt==siz)
        {
            for(int i=0,j=1; i<siz-1,j<siz; i++,j++)
            {
                if(arry[i]>arry[j])
                {
                    cout<< "NO"<<endl;
                    break;
                }
                else
                {
                    cnt2++;
                }
            }
            if(cnt2==(siz-1))
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            for(int i=0; i<siz; i++)
            {
                if(arry[i]>0)
                {
                    cnt3++;
                    newarry[i]=-(arry[i]);
                }
            }
            for(int i=siz-1; i>=0; i--)
            {
                if(arry[i]<0)
                {
                    cnt4++;
                    newarry[i]=-(arry[i]);
                        if(cnt3==cnt4)
                    {
                        break;
                    }
                }

            }
            for(int i=0,j=1; i<siz-1,j<siz; i++,j++)
            {
                if(newarry[i]>newarry[j])
                {
                    cout<< "NO"<<endl;
                    break;
                }
                else
                {
                    cnt5++;
                }
                if(cnt5==(siz-1))
                {
                    cout<<"YES"<<endl;
                }


            }

        }
    }
    return 0;
}
