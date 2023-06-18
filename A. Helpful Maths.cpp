#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ar[10000];
    scanf("%s",&ar);
    int b=strlen(ar);
    vector <char>vc;
    for(int i=0 ; i<b ; i+=2)
    {
        vc.push_back(ar[i]);
    }
    sort(vc.begin(),vc.end());
    for(int j=0; j<(int)vc.size(); j++)
    {
        if(j>0) printf("+");
            printf("%c",vc[j]);
    }
    printf("\n");
    return 0;
}
