#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n,h,sum=0;
   cin>>n>>h;
   ll arry[n];
   for(int i=0; i<n; i++)
   {
       cin>>arry[i];
   }
   for(int i=0; i<n; i++)
   {
       if(arry[i]>h)
       {
           sum=sum+2;
       }
       else{
        sum=sum+1;
       }
   }
   cout<<sum<<endl;
    return 0;
}

