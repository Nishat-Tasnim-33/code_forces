#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        b=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=b;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
