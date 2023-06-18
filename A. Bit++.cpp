#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt1=0,cnt2=0,output=0;
    string a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a=="X++"||a=="++X")
        {

            cnt1++;
        }
        else if(a=="--X"||a=="X--")
        {
            cnt2++;
        }
    }
   output=cnt1-cnt2;
    cout<<output<<endl;
    return 0;
}
