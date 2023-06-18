#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
       for(int j=i+1; j<n; j++)
       {
           if(arr[i]==arr[j])
           {
               c++;
               break;
           }
          if(arr[i]!=arr[j])
           {
               c++;
           }
       }
    }
    printf("%d",c);
    return 0;
}
