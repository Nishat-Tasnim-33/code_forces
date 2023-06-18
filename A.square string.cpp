#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        char ch[100000],chh[100000],ab[100000];
        cin>>ch;
        int a = strlen(ch);
        if (a%2==1)
        {
            cout<< "NO"<<endl;
        }
        else
        {
            int b =(a/2);
            for(int i=0; i<b; i++)
            {
                chh[i]==ch[i];

            }
            for(int i=0,j=b; i<b,j<a; i++,j++)
            {
                ab[i]==ch[j];

            }
      for(int i=0; i<b; i++)
      {
          if(chh[i]!=ab[i])
          {
              cout<< "NO"<<endl;
              break;
          }
          else{
            c++;
          }
      }
      if(c==b)
      {
          cout<< "YES"<<endl;
      }

        }
    }
    return 0;
}

