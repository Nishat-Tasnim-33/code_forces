#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[20000];
    cin>>s;
    int b= strlen(s);
    int c=0;
    cout<<b<<endl;
    for(int i=0; i<b; i++)
    {
        if (s[i]==s[i+1])
        {
            c++;
            if(s[i+1]!=s[i+2])
                c++;
            if(c>=7)
                break;
        }
        else
            c=0;
    }
    if(c>=7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}
