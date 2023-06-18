#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <int> hold;
        for(int i=0; i<3; i++)
        {
            int input;
            cin>>input;
            hold.push_back(input);
        }
        sort(hold.begin(),hold.end());
        if((hold[0]+hold[1])==hold[2])
            cout<<"YES"<<endl;
        else cout<< "NO"<<endl;
    }

    return 0;
}
