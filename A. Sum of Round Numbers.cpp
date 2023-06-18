#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,a,cnt=0;
    cin>>num;
    int newnum=num;
    vector <int> store;
    while(num<=9)
    {
        a=num%10;
        cnt++;
        store.push_back(a);
        num=a;
    }
    if(num==0)
    {
        cout<<'1'<<endl;
        cout<<newnum<<endl;
    }
    else
    {
        cout<<cnt<<endl;
        for(int i=0; i<store.size(); i++)
        {
            cout<<store[i]<<endl;
        }
    }
    return 0;
}
