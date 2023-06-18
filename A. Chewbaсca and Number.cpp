#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int number1;
    vector<int>hold;
    while(num>0)
    {
        number1=num%10;
        hold.push_back(number1);
        num=num/10;
    }
    int siz= hold.size();

    for(int i=0; i<=siz-2; i++)
    {
        if(hold[i]>4 && hold[i]<=9)
        {
            hold[i]=9-hold[i];
        }
        else
        {
            hold[i]=hold[i];
        }
    }
    if(hold[siz-1]>4 && hold[siz-1]<9  )
    {
        hold[siz-1]=9-hold[siz-1];
    }
    else
    {
        hold[siz-1]=hold[siz-1];
    }
    for(int i=siz-1; i>=0; i--)
    {
        cout<<hold[i];
    }
    cout<<endl;

    return 0;
}

