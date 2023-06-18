#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char a[10000000];
    cin>>a;
    int c=0;
    int b=0;
    b= strlen(a);
    for(int i=a[0]; i<a[b]; i++)
    {
        if (a[i]!=a[i+1])
        {
            c++;
        }
        if((a[i]==a[i+1])&&(a[i]==a[i+2]))
        {
            c++;
        }
    }
   cout<<c<<endl;
    return 0;

}
