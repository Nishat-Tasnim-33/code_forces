#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1000000];
    cin>>ch;
    int b= strlen(ch),cnt=1;
    for(int i=0;i<b;i++)
    {
        if(ch[i]==ch[i+1])
        {
            cnt++;
        }
        if(ch[i]!=ch[i+1])
        {
            cnt=1;
        }
        if(cnt>=7)
        {
            cout<< "YES"<<endl;
            break;
        }
    }
    if(cnt<7)
    {
        cout<< "NO"<<endl;
    }
    return 0;
}
