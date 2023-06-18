#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin.ignore();
        string str;
        cin>>str;
        int sum1=0, sum2=0;
        for(int i=0,j=3; i<=2,j<=5; i++,j++){
            sum1+=str[i];
            sum2+=str[j];
        }
        if(sum1==sum2){
            cout<< "YES"<<endl;
        }
        else{
            cout<< "NO"<<endl;
        }
    }
    return 0;
}
