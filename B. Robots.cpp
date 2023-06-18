#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m,cnt=0;
        cin>>n>>m;
        char str[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>str[i][j];
            }
        }
        if(n==1 && m==1 && str[0][0]=='R')
        {
            cout<< "YES"<<endl;
        }
        else if(n>1&&m>1)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                  if()
                }

        }
        else
        {
            if(int i=0; i<n; i++)
            for(int i=0; i<n; i++)
            {
                if(str[i][0]=='R')
                {
                    cnt++;
                }
            }
            if(cnt>0){
                cout<< "NO"<<endl;
            }
    }
    return 0;
}
