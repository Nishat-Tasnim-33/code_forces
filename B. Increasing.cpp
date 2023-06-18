#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int test;
      cin>>test;
      set<int>s;
      for(int i=0; i<test; i++)
      {
          int a;
          cin>>a;
          s.insert(a);
      }

      int hold = s.size();
      if(hold==test)
        cout<< "YES"<<endl;
      else cout<< "NO"<<endl;
    }

    return 0;
}

