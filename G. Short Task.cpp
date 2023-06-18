#include<bits/stdc++.h>
using namespace std;

int mark [1000002];
int c=0;
vector<int> divisors;
int Divisors(int n)
{
    int i, j ;
    for ( i = 1; i <= n ; i ++ )
    {
        for ( j = i ; j <= n ; j += i )
        {
            divisors[ j ].push_back( i ) ;
        }
        for ( j = i ; j <= n ; j += i )
        {
            if(divisors[j]>0)
            {
                printf("%d\n",n);
                break;
            }
            else
            {
                printf("-1\n");
                break;
            }
        }
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        int n;
        int b= Divisors(n);
        printf("%d",b);
    }
    return 0;
}
