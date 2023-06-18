#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num,sum=0;
        cin>>num;
        int arry[num];
        for(int i=0; i<num; i++){
            cin>>arry[i];
        }
        int x=500000;
        int &minn = *min_element(arry,arry+num);
        //cout<<minn;
        for(int i=0; i<num; i++){
           int neww=0;
           neww=arry[i]-minn;
           sum+=neww;
        }
        /*for(int i=0; i<num; i++){
           cout << arry[i]<<endl;
        }*/
        cout<<sum<<endl;
    }
    return 0;
}
