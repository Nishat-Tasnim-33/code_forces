#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    /// Test is the number of test case you want to run;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        if(a==0&&b>0)
        {
            cout<<'1'<<endl;
        }
        else
        {
            cout<<(a+(b*2))+1<<endl;
        }
    }
    return 0;
}


