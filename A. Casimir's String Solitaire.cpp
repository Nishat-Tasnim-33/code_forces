#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >>test;
    while(test--)
    {
        string str;
        cin>>str;
        int case1= count(str.begin(),str.end(),'A');
        int case2= count(str.begin(),str.end(),'B');
        int case3= count(str.begin(),str.end(),'C');
        int out=case2-case1-case3;
        if(out==0)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
    return 0;
}
