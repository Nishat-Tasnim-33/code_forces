#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int siz;cin>>siz;
        char str[siz];
        cin>>str;
        set<char>nset;
        for(int i=0; i<siz; i++)
        {
            nset.insert(str[i]);
        }
        int hold = nset.size();
        if(hold==siz)
        {
            cout<<siz*2<<endl;
        }
        else{
            int sub=siz-hold;
            cout<<(siz*2)-sub<<endl;
        }
        nset.clear();
    }
    return 0;
}
