#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>result;
    int n;
    cin>>n;
    int arry[n];
    int oldarry[n];
    for(int i=0; i<n; i++)
    {
        cin>>arry[i];
        oldarry[i]=arry[i];
    }
    sort(arry,arry+n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arry[i]==oldarry[j]){
                result.push_back(j+1);}
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
