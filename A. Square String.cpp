#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string main,s1,s2;
        cin>>main;
        int mainsize= main.size();
        if(mainsize%2==1)
        {
            cout<< "NO"<<endl;
        }
        else
        {
            int a=(mainsize/2);
            for(int i=0,j=a; i<a,j<mainsize; i++,j++)
            {
                s1[i]+=main[i];
                s2[i]+=main[j];
            }

            if(s1==s2)
            {
                cout<< "YES"<<endl;
            }
            else
            {
                cout<< "NO"<<endl;
            }

        }
    }
    return 0;
}
