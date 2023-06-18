#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        char ch[500000];
        scanf("%s",&ch);
        int b;
        b= strlen(ch);
        if(b<=10)
        {
            printf("%s\n",ch);
        }
        else
        {
            printf("%c%d%c\n",ch[0],b-2,ch[b-1]);
        }
    }
    return 0;
}
