#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a;
    int beauty[6][6];
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>beauty[i][j];
        }
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(beauty[i][j]==1)
            {
                a=abs(3-i)+abs(3-j);
            }
        }
    }
    cout<<a<<endl;
    return 0;
}
