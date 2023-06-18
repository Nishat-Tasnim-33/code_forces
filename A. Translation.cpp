#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch;
    cin>>ch;
    reverse(ch.begin(), ch.end());
    string anth;
    cin>>anth;
    if(anth==ch)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}
