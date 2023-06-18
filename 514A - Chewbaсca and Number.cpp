#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    cin>>a;
    int len= strlen(a);

    for(int i=0; i<len; i++)
    {
        if(a[0]==57||a[0]<=52)
            continue;
        else if(a[i]<=52)
            continue;
        else
            a[i]=(57-a[i]);
    }

    for (int i=0; i<len; i++)
    {
        cout<<a[i];
    }
    return 0;
}


