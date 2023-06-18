#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>holder;
    int test1;
    cin>>test1;
    while(test1--){
    int test2,sizz;
    cin>>test2>>sizz;
    for(int i=0; i<test2; i++){
    int asci=0;
    cin.ignore();
    string str;
    cin>>str;
    for(int i=0; i<sizz; i++){
        asci+=int(str[i]);
    }
    holder.push_back(asci);
    asci=0;
    }


    sort(holder.begin(),holder.end());
        for(int i=0; i<holder.size(); i++){
            cout<<holder[i]<<" ";
        }
    int mindif=500000;
    int in1=0,in2=0;
    for(int i=0; i<holder.size()-1; i++){
        for(int j=1; j<holder.size(); j++){
            if((holder[j]-holder[i])<mindif){
                mindif=(holder[j]-holder[i]);
                in1=holder[j];
                in2=holder[i];
            }
        }
   }
   cout<<mindif<<" ";
      cout<<in1<<in2<<endl;
   if(in1>in2){
   cout<<in1-in2<<endl;
   }
   else{
    cout<<in2-in1<<endl;
   }
   holder.clear();
   }

    return 0;
}

