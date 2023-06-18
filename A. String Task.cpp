#include<stdio.h>

int main()
{
    char st[500000];
    gets(st);
    int a;
    a=strlen(st);
    for(int i=0; i<a; i++)
    {
        if( st[i] >= 'a' && st[i] <= 'z' )
        {
            st[i] = st[i] - 32;
            printf<<st[i];
        }
        else
        {
            printf<<st[i];
        }
    }
    return 0;
}
