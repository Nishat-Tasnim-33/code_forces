#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,casee;
    cin>>num;
    for(int i=0; i<num; i++)
    {
        cin>>casee;

        if(casee<=1399)
        {
            cout<< "Division 4" <<endl;
        }
        else if(casee>=1400 && casee<=1599)
        {
            cout<< "Division 3" <<endl;
        }
        else if(casee>=1600 && casee<=1899)
        {
            cout<< "Division 2" <<endl;
        }
        else if(casee>=1900)
        {
            cout<< "Division 1" <<endl;
        }
    }
    return 0;
}
