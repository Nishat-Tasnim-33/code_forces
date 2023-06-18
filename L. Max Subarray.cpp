#include<bits/stdc++.h>
using namespace std;

vector<int>boro;
int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1; t<=T; t++)
    {
        boro.clear();
        int a,b=-500000,x=0;
        scanf("%d",&a);
        int arr[a];
        for(int i=0; i<a; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<a; i++)
        {
            for(int j=i; j<a; j++)
            {
                for(int k=i; k<=j; k++)

                {
                    b=max(arr[k],b);
                }
                boro.push_back(b);
                b=-500000;
            }

        }
        for(int i=0; i<boro.size(); i++)
        {
            printf("%d ",boro[i]);
        }
        printf("\n");
    }
    return 0;
}

