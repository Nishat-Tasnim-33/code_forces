#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///Reading
    string A;
    ifstream in("sav.txt");
    while(in.eof()==0)
    {
        getline(in,A);
        cout<<A<<endl;
    }
    ///writting
    ofstream x("sav.txt");
    string B;
    B="Hi\nIt's Nishat Tasnim";
    cout<<B<<endl;

    return 0;
}

