#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main()
{
   ll n,sum=0;
   cin>>n;
   vector <ll> vec(n);
   for(int i=0; i<n; i++)
   {
       cin>>vec[i];
   }
   ll a,b;
   cin>>a>>b;
   for(int i=a; i<=b; i++)
   {
       sum+=vec[i];
   }
   cout<<sum<<endl;
   return 0;
}

