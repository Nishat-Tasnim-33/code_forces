#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arry[3];
    for(int i=0; i<3; i++)
    {
        cin>>arry[i];
    }
    sort(arry,arry+3,greater<int>());
    int a= arry[0]-arry[1];
    int b=arry[1]-arry[2];
    int c= a+b;
    cout<<c<<endl;
    return 0;
}
